/*
 * Local replacement for /usr/lib/libYiP2P.so on the Yi/Anyka AK3918 camera.
 *
 * anyka_ipc talks to the Yi P2P cloud only through this library: it calls
 * yi_p2p_* functions here, and the library calls back into anyka_ipc through
 * the yi_p2p_on_* functions that anyka_ipc exports. This version never opens
 * a connection to the internet. It runs a small HTTP server on the LAN
 * instead:
 *
 *   GET /            web page (www/index.html)
 *   GET /<file>      static file from www/ (player script)
 *   GET /stream      live H.264 (?hd=1 main 1280x720, ?hd=0 sub 640x360)
 *   GET /time?t=MS   set the camera clock from the browser (no internet = no NTP)
 *   GET /image       image orientation as JSON; ?flip=0|1&mirror=0|1 changes it
 *   GET /light       night vision and white light; ?ir=auto|on|off&white=0|1
 *   GET /ptz?dir=    pan/tilt: up|down|left|right keeps moving while repeated
 *                    (at least every PTZ_HOLD_MS), stop stops
 *   GET /status      read-only diagnostics: routes, DNS, Wi-Fi link, mounts, viewers
 *
 * Recordings (anyka_ipc writes one MP4 a minute to /mnt/record/2026Y10M19D19H/
 * 26M18S41.mp4: the folder is the local hour, the file starts at minute 26,
 * second 18 and lasts 41 s):
 *
 *   GET /rec             hour folders; ?d=FOLDER lists the files in one
 *   GET /rec/FOLDER/FILE one recording, with Range requests for seeking; ?dl=1 downloads
 *   GET /record          recording on/off, days kept, SD card space
 *   POST /record         on=0|1, keep=DAYS (0 = until the card is full)
 *   POST /rec/delete     p=DAY (2026Y10M19D) | FOLDER | FOLDER/FILE
 *   GET /upload          FTP upload settings (never the password) and progress
 *   POST /upload         on, host, port, user, pass, path (an empty pass keeps the old one)
 *   POST /upload/test    the same fields: logs in and writes a test file, saves nothing
 *
 * POST requests must carry "X-Localcam: 1". A page on another site cannot
 * add that header (the browser would ask the camera first, CORS, and gets no
 * permission), so it cannot delete recordings or change settings through the
 * user's browser.
 *
 * Latency: a frame is dropped (and sending resumes at the next key frame)
 * whenever the socket still has more than MAX_QUEUED bytes waiting, so a slow
 * Wi-Fi link drops frames instead of building up seconds of delay.
 *
 * Opening /stream calls yi_p2p_on_new_session(sid) in anyka_ipc. anyka_ipc then
 * starts its own worker_thread and stream_send_thread for that sid, exactly as
 * for a phone app viewer, and passes every encoded frame to
 * yi_p2p_send_frame_data(). Each frame goes to the browser as
 *
 *   [u32 BE payload length][u32 BE timestamp ms][u8 flags, bit0 = key frame][payload]
 *
 * Build: see ../build.sh. It is linked against the camera's own uClibc 0.9.33,
 * so only plain libc/pthread calls are used here.
 */
#include <arpa/inet.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <pthread.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/vfs.h>
#include <time.h>
#include <unistd.h>

#define DEFAULT_WWW      "/tmp/localcam/www"	/* copied from the SD card by config.sh */
#define DEFAULT_SD       "/mnt"			/* SD card: record/ and debug/ */
#define DEFAULT_PORT     80
#define FALLBACK_PORT    8080
#define START_DELAY_S    20      /* let anyka_ipc start its encoder first */
#define MAX_SESSIONS     3
#define MAX_CLIENTS      16
#define RELEASE_WAIT_S   15
#define FRAME_HDR_LEN    9
#define STREAM_SNDBUF    (256 * 1024)
#define MAX_QUEUED       (256 * 1024)	/* a few HD key frames; ~1-2 s on a slow link */
#define HW_CONF          "/etc/jffs2/hw.conf"
#define WHITE_LED        "/sys/user-gpio/WHITE_LED"
#define VI_HANDLE        100		/* what anyka_ipc itself passes */
#define PTZ_HOLD_MS      700		/* motor stops unless the browser repeats within this */
#define REQ_MAX          4096
#define BODY_MAX         2048
#define KEEP_DAYS        14		/* recordings older than this are deleted */
#define RETENTION_EVERY_S 600
#define UPLOAD_EVERY_S   15
#define UPLOAD_BATCH     500		/* files per pass; the rest go in the next one */
#define FTP_TIMEOUT_S    15
/* The camera has no clock of its own: after power-up it counts from 1970 (or
 * an old firmware date) until a browser or the FTP server gives it the time.
 * Anything before this is such a clock, never a real date. 2026-09-21. */
#define SANE_TIME        1790000000

/* Same layout as yi_frame_info_t in anyka_ipc (from its debug info). */
typedef struct {
	time_t   sec;
	uint32_t ts;
	uint16_t width;
	uint16_t height;
	uint8_t  is_live;
	uint8_t  is_video;
	uint8_t  is_iframe;
	uint8_t  is_h265;
	uint8_t  ptz_stat;
	uint8_t  in_loss;
	uint8_t  out_loss;
} yi_frame_info_t;

/* Exported by anyka_ipc, resolved when the library is loaded into it. */
extern int yi_p2p_on_new_session(uint32_t sid);
/* The handle is only checked for non-zero; anyka_ipc passes 100. The Yi app
 * setting (yi_p2p_on_set_mirror_flip) always sets both, we set them apart. */
extern int ak_vi_set_flip_mirror(int handle, int flip, int mirror);
extern int ak_vi_get_flip_mirror(int handle, int *flip, int *mirror);
/* 0 = night (IR on), 1 = day (IR off), 2 = automatic; anyka_ipc never calls it itself. */
extern int ak_misc_photosensitive_set_status_ex(int mode);
/* The Yi app's pan/tilt calls: direction 1 up, 2 down, 3 left, 4 right; speed is ignored. */
extern int yi_p2p_on_ptz_direction_ctrl(int direction, uint32_t speed);
extern int yi_p2p_on_ptz_direction_ctrl_stop(void);
/* 0 = stop recording, 1 = all the time (plan), 2 = on motion. The Yi app's
 * yi_p2p_on_set_sd_record_stop() calls this too, but then also saves
 * yi_cfg.ini to flash; called directly, nothing is written. */
extern int AkSetRecordMode(int mode);

enum { S_FREE, S_ALIVE, S_CLOSED, S_RELEASED };

struct session {
	pthread_mutex_t lock;   /* guards fd and state */
	uint32_t sid;
	int state;
	int fd;
	int hd;
	int got_key;
	unsigned long frames;
	unsigned long dropped;
	int limit;		/* bytes allowed in flight, see handle_stream() */
};

static struct session sessions[MAX_SESSIONS] = {
	{ PTHREAD_MUTEX_INITIALIZER, 0, S_FREE, -1, 0, 0, 0, 0, MAX_QUEUED },
	{ PTHREAD_MUTEX_INITIALIZER, 0, S_FREE, -1, 0, 0, 0, 0, MAX_QUEUED },
	{ PTHREAD_MUTEX_INITIALIZER, 0, S_FREE, -1, 0, 0, 0, 0, MAX_QUEUED },
};
static pthread_mutex_t alloc_lock = PTHREAD_MUTEX_INITIALIZER;
static uint32_t next_sid = 1000;
static int active_clients;
static const char *www_dir = DEFAULT_WWW;
static const char *sd_dir = DEFAULT_SD;

static void logmsg(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

/*
 * anyka_ipc's own output is sent to /dev/null (see sd/debug/scripts), so our
 * few messages go to the serial console and to a small file in RAM.
 */
#define LOG_FILE  "/tmp/localcam.log"
#define LOG_LIMIT (64 * 1024)

static void logmsg(const char *fmt, ...)
{
	static int console = -2;
	char buf[256];
	va_list ap;
	int n, f;

	n = snprintf(buf, sizeof(buf), "[localcam] ");
	va_start(ap, fmt);
	vsnprintf(buf + n, sizeof(buf) - n, fmt, ap);
	va_end(ap);
	n = strlen(buf);

	if (console == -2)
		console = getenv("LOCALCAM_FORCE") ? 2 : open("/dev/console", O_WRONLY | O_NOCTTY);
	if (console >= 0)
		write(console, buf, n);
	f = open(LOG_FILE, O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (f >= 0) {
		if (lseek(f, 0, SEEK_END) > LOG_LIMIT) {
			close(f);
			f = open(LOG_FILE, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		}
		if (f >= 0) {
			write(f, buf, n);
			close(f);
		}
	}
}

/* ---------- sessions ---------- */

static struct session *session_find(uint32_t sid)
{
	int i;

	if (sid == 0)
		return NULL;
	for (i = 0; i < MAX_SESSIONS; i++)
		if (sessions[i].sid == sid)
			return &sessions[i];
	return NULL;
}

static struct session *session_alloc(int fd, int hd)
{
	struct session *s = NULL;
	int i;

	pthread_mutex_lock(&alloc_lock);
	for (i = 0; i < MAX_SESSIONS; i++) {
		if (sessions[i].sid == 0) {
			s = &sessions[i];
			pthread_mutex_lock(&s->lock);
			s->sid = next_sid++;
			s->state = S_ALIVE;
			s->fd = fd;
			s->hd = hd;
			s->got_key = 0;
			s->frames = 0;
			s->dropped = 0;
			s->limit = MAX_QUEUED;
			pthread_mutex_unlock(&s->lock);
			break;
		}
	}
	pthread_mutex_unlock(&alloc_lock);
	return s;
}

static void session_free(struct session *s)
{
	pthread_mutex_lock(&alloc_lock);
	pthread_mutex_lock(&s->lock);
	s->sid = 0;
	s->state = S_FREE;
	s->fd = -1;
	pthread_mutex_unlock(&s->lock);
	pthread_mutex_unlock(&alloc_lock);
}

static int session_alive(uint32_t sid)
{
	struct session *s = session_find(sid);

	return s && s->state == S_ALIVE;
}

/* ---------- socket helpers ---------- */

static int send_all(int fd, const void *p, size_t n, int flags)
{
	const char *c = p;

	while (n > 0) {
		ssize_t r = send(fd, c, n, flags | MSG_NOSIGNAL);
		if (r < 0) {
			if (errno == EINTR)
				continue;
			return -1;
		}
		c += r;
		n -= r;
	}
	return 0;
}

static int send_str(int fd, const char *s)
{
	return send_all(fd, s, strlen(s), 0);
}

static void set_timeout(int fd, int optname, int seconds)
{
	struct timeval tv;

	tv.tv_sec = seconds;
	tv.tv_usec = 0;
	setsockopt(fd, SOL_SOCKET, optname, &tv, sizeof(tv));
}

/* Bytes sent but not yet acknowledged by the browser. */
static int queued_bytes(int fd)
{
	int n = 0;

	if (ioctl(fd, TIOCOUTQ, &n) < 0)
		return 0;
	return n;
}

static void put_be32(unsigned char *p, uint32_t v)
{
	p[0] = v >> 24;
	p[1] = v >> 16;
	p[2] = v >> 8;
	p[3] = v;
}

/* ---------- HTTP ---------- */

static void send_body(int fd, const char *status, const char *type, const char *body, size_t len)
{
	char hdr[256];

	snprintf(hdr, sizeof(hdr),
		 "HTTP/1.1 %s\r\nContent-Type: %s\r\nContent-Length: %u\r\n"
		 "Cache-Control: no-store\r\nConnection: close\r\n\r\n",
		 status, type, (unsigned)len);
	if (send_str(fd, hdr) == 0)
		send_all(fd, body, len, 0);
}

static void send_status(int fd, const char *status, const char *body)
{
	send_body(fd, status, "text/plain", body, strlen(body));
}

/* A growing string for JSON replies (a long list of recordings). */
struct sbuf {
	char *p;
	size_t len, cap;
	int failed;
};

static void sb_add(struct sbuf *b, const char *s, size_t n)
{
	size_t cap = b->cap ? b->cap : 1024;
	char *p;

	if (b->len + n + 1 > b->cap) {
		while (cap < b->len + n + 1)
			cap *= 2;
		p = realloc(b->p, cap);
		if (!p) {
			b->failed = 1;
			return;
		}
		b->p = p;
		b->cap = cap;
	}
	memcpy(b->p + b->len, s, n);
	b->len += n;
	b->p[b->len] = '\0';
}

static void sb_printf(struct sbuf *b, const char *fmt, ...) __attribute__((format(printf, 2, 3)));

/* For short pieces only (up to 255 bytes); strings go through sb_json(). */
static void sb_printf(struct sbuf *b, const char *fmt, ...)
{
	char tmp[256];
	va_list ap;
	int n;

	va_start(ap, fmt);
	n = vsnprintf(tmp, sizeof(tmp), fmt, ap);
	va_end(ap);
	if (n > 0)
		sb_add(b, tmp, n < (int)sizeof(tmp) ? (size_t)n : sizeof(tmp) - 1);
}

static void sb_json(struct sbuf *b, const char *s)
{
	char esc[8];

	sb_add(b, "\"", 1);
	for (; *s; s++) {
		unsigned char c = *s;

		if (c == '"' || c == '\\' || c < 0x20) {
			snprintf(esc, sizeof(esc), c < 0x20 ? "\\u%04x" : "\\%c", c);
			sb_add(b, esc, strlen(esc));
		} else {
			sb_add(b, s, 1);
		}
	}
	sb_add(b, "\"", 1);
}

static void send_json(int fd, struct sbuf *b)
{
	if (b->failed || !b->p)
		send_status(fd, "500 Internal Server Error", "out of memory\n");
	else
		send_body(fd, "200 OK", "application/json", b->p, b->len);
	free(b->p);
}

static int hexval(int c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	if (c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	if (c >= 'A' && c <= 'F')
		return c - 'A' + 10;
	return -1;
}

/*
 * KEY's value from a query string or form body (a=1&b=x%20y), decoded.
 * Returns 1 if found, 0 if not, -1 if it does not fit in out.
 */
static int form_get(const char *s, const char *key, char *out, size_t size)
{
	size_t klen = strlen(key), n = 0;

	while (s && *s) {
		if (!strncmp(s, key, klen) && s[klen] == '=') {
			for (s += klen + 1; *s && *s != '&'; s++) {
				int c = *s;

				if (c == '+') {
					c = ' ';
				} else if (c == '%' && hexval(s[1]) >= 0 && hexval(s[2]) >= 0) {
					c = hexval(s[1]) * 16 + hexval(s[2]);
					s += 2;
				}
				if (n >= size - 1) {
					out[n] = '\0';
					return -1;
				}
				out[n++] = c;
			}
			out[n] = '\0';
			return 1;
		}
		s = strchr(s, '&');
		if (s)
			s++;
	}
	return 0;
}

/* A request header's value (name without the colon, any case). */
static int header_get(const char *req, const char *name, char *out, size_t size)
{
	size_t nlen = strlen(name), n = 0;
	const char *p = strstr(req, "\r\n");

	while (p && p[2] && p[2] != '\r') {
		p += 2;
		if (!strncasecmp(p, name, nlen) && p[nlen] == ':') {
			for (p += nlen + 1; *p == ' ' || *p == '\t'; p++)
				;
			while (p[n] && p[n] != '\r' && n < size - 1)
				n++;
			memcpy(out, p, n);
			out[n] = '\0';
			return 1;
		}
		p = strstr(p, "\r\n");
	}
	return 0;
}

/* ---------- small files on the SD card (KEY=value lines, like wifi.conf) ---------- */

static void sd_path(char *out, size_t size, const char *rel)
{
	snprintf(out, size, "%s/%s", sd_dir, rel);
}

/* Reads a whole small file as a string; -1 if it cannot be read. */
static ssize_t read_text(const char *path, char *buf, size_t size)
{
	ssize_t n;
	int f;

	buf[0] = '\0';
	f = open(path, O_RDONLY);
	if (f < 0)
		return -1;
	n = read(f, buf, size - 1);
	close(f);
	buf[n > 0 ? n : 0] = '\0';
	return n;
}

/* Through a temporary file, so a power cut never leaves half a file. */
static int write_text(const char *path, const char *buf, size_t len)
{
	char tmp[200];
	int f, ok;

	snprintf(tmp, sizeof(tmp), "%s.tmp", path);
	f = open(tmp, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f < 0)
		return -1;
	ok = write(f, buf, len) == (ssize_t)len;
	ok = close(f) == 0 && ok;
	/* Some exFAT drivers will not rename over an existing file. */
	if (ok && rename(tmp, path) < 0)
		ok = unlink(path) == 0 && rename(tmp, path) == 0;
	if (!ok) {
		unlink(tmp);
		return -1;
	}
	return 0;
}

/* KEY=value at the start of a line; Windows line endings are fine. */
static int conf_get(const char *buf, const char *key, char *out, size_t size)
{
	size_t klen = strlen(key), n = 0;
	const char *p = buf;

	while (p && *p) {
		if (!strncmp(p, key, klen) && p[klen] == '=') {
			p += klen + 1;
			while (p[n] && p[n] != '\n' && p[n] != '\r' && n < size - 1)
				n++;
			memcpy(out, p, n);
			out[n] = '\0';
			return 1;
		}
		p = strchr(p, '\n');
		if (p)
			p++;
	}
	return 0;
}

/* n decimal digits, or -1. */
static int digits(const char *s, int n)
{
	int v = 0;

	while (n--) {
		if (*s < '0' || *s > '9')
			return -1;
		v = v * 10 + *s++ - '0';
	}
	return v;
}

static const char *content_type(const char *name)
{
	const char *dot = strrchr(name, '.');

	if (!dot)
		return "application/octet-stream";
	if (!strcmp(dot, ".html"))
		return "text/html; charset=utf-8";
	if (!strcmp(dot, ".js"))
		return "text/javascript";
	if (!strcmp(dot, ".css"))
		return "text/css";
	if (!strcmp(dot, ".txt"))
		return "text/plain; charset=utf-8";
	if (!strcmp(dot, ".svg"))
		return "image/svg+xml";
	if (!strcmp(dot, ".png"))
		return "image/png";
	if (!strcmp(dot, ".ico"))
		return "image/x-icon";
	return "application/octet-stream";
}

/* Only plain file names inside www/: letters, digits, '.', '-', '_'. */
static int safe_name(const char *name)
{
	const char *c;

	if (!*name || *name == '.' || strlen(name) > 64)
		return 0;
	for (c = name; *c; c++) {
		if (!((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z') ||
		      (*c >= '0' && *c <= '9') || *c == '.' || *c == '-' || *c == '_'))
			return 0;
	}
	return 1;
}

static void serve_file(int fd, const char *name)
{
	char path[160], hdr[256], buf[4096];
	off_t size;
	ssize_t n;
	int f;

	if (!safe_name(name)) {
		send_status(fd, "404 Not Found", "not found\n");
		return;
	}
	snprintf(path, sizeof(path), "%s/%s", www_dir, name);
	f = open(path, O_RDONLY);
	if (f < 0) {
		send_status(fd, "404 Not Found", "not found\n");
		return;
	}
	size = lseek(f, 0, SEEK_END);
	lseek(f, 0, SEEK_SET);
	snprintf(hdr, sizeof(hdr),
		 "HTTP/1.1 200 OK\r\nContent-Type: %s\r\nContent-Length: %ld\r\n"
		 "Cache-Control: no-cache\r\nConnection: close\r\n\r\n",
		 content_type(name), (long)size);
	if (send_str(fd, hdr) == 0) {
		while ((n = read(f, buf, sizeof(buf))) > 0)
			if (send_all(fd, buf, n, 0) < 0)
				break;
	}
	close(f);
}

/* The camera has no RTC and, without the cloud, no time source. */
static void handle_time(int fd, const char *query)
{
	const char *t = query ? strstr(query, "t=") : NULL;
	unsigned long long ms;
	struct timeval now, tv;
	long diff;

	if (!t) {
		send_status(fd, "400 Bad Request", "missing t\n");
		return;
	}
	ms = strtoull(t + 2, NULL, 10);
	if (ms < 1600000000000ULL) {
		send_status(fd, "400 Bad Request", "bad t\n");
		return;
	}
	gettimeofday(&now, NULL);
	diff = (long)(ms / 1000) - (long)now.tv_sec;
	if (diff > 30 || diff < -30) {
		tv.tv_sec = ms / 1000;
		tv.tv_usec = (ms % 1000) * 1000;
		if (settimeofday(&tv, NULL) == 0)
			logmsg("clock set from browser (was off by %ld s)\n", diff);
	}
	send_status(fd, "200 OK", "ok\n");
}

/* ---------- camera settings: orientation, night vision, white light ---------- */

/* -1: leave it as anyka_ipc set it. Chosen values are kept in debug/camera.conf. */
static int image_flip = -1, image_mirror = -1;
static int ir_mode = -1;	/* one of IR_ON, IR_OFF, IR_AUTO */
static int white_light = -1;
static int ir_pending;		/* anyka_ipc's day/night thread was not running yet */
static int rec_on = -1;		/* -1: anyka_ipc records all the time, as it does by itself */
static int keep_days = KEEP_DAYS;	/* 0: anyka_ipc deletes the oldest when the card is full */
static volatile int rec_wakeup;	/* settings changed: rec_thread works now instead of later */

/* anyka_ipc's day_night_switch_mode: NIGHT = IR on, DAY = IR off, AUTO = light sensor */
enum { IR_ON = 0, IR_OFF = 1, IR_AUTO = 2 };
static const char *const ir_names[] = { "on", "off", "auto" };

static void image_apply(void)
{
	int flip = 0, mirror = 0;

	if (image_flip < 0 && image_mirror < 0)
		return;
	ak_vi_get_flip_mirror(VI_HANDLE, &flip, &mirror);
	if (image_flip >= 0)
		flip = image_flip;
	if (image_mirror >= 0)
		mirror = image_mirror;
	ak_vi_set_flip_mirror(VI_HANDLE, flip, mirror);
}

static void ir_apply(void)
{
	if (ir_mode < 0)
		return;
	ir_pending = ak_misc_photosensitive_set_status_ex(ir_mode) != 0;
}

/* hw.conf byte 24 says whether the LED is wired inverted (as service.sh reads it). */
static void white_apply(void)
{
	char hw[64] = "";
	char level;
	ssize_t n;
	int f, inverted;

	if (white_light < 0)
		return;
	f = open(HW_CONF, O_RDONLY);
	if (f >= 0) {
		n = read(f, hw, sizeof(hw) - 1);
		close(f);
		hw[n > 0 ? n : 0] = '\0';
	}
	inverted = strlen(hw) >= 24 && hw[23] == '1';
	level = (white_light ^ inverted) ? '1' : '0';
	f = open(WHITE_LED, O_WRONLY);
	if (f >= 0) {
		write(f, &level, 1);
		close(f);
	}
}

static int ir_from_name(const char *v)
{
	int i;

	for (i = 0; i < 3; i++)
		if (!strncmp(v, ir_names[i], strlen(ir_names[i])))
			return i;
	return -1;
}

/* Only "off" is applied over and over: anyka_ipc switches recording on by
 * itself at startup. Repeating AkSetRecordMode(0) when it is already off
 * does nothing. */
static void record_apply(void)
{
	if (rec_on == 0)
		AkSetRecordMode(0);
}

/* anyka_ipc applies its own orientation at startup; apply ours after it. */
static void settings_load(void)
{
	char path[160], buf[512], v[16];

	sd_path(path, sizeof(path), "debug/camera.conf");
	if (read_text(path, buf, sizeof(buf)) < 0)
		return;
	if (conf_get(buf, "FLIP", v, sizeof(v)))
		image_flip = atoi(v) ? 1 : 0;
	if (conf_get(buf, "MIRROR", v, sizeof(v)))
		image_mirror = atoi(v) ? 1 : 0;
	if (conf_get(buf, "IR", v, sizeof(v)))
		ir_mode = ir_from_name(v);
	if (conf_get(buf, "WHITE", v, sizeof(v)))
		white_light = atoi(v) ? 1 : 0;
	if (conf_get(buf, "REC", v, sizeof(v)))
		rec_on = atoi(v) ? 1 : 0;
	if (conf_get(buf, "KEEP_DAYS", v, sizeof(v)))
		keep_days = atoi(v) > 0 ? atoi(v) : 0;
	image_apply();
	ir_apply();
	white_apply();
	record_apply();
	logmsg("settings from %s: flip %d, mirror %d, ir %s, white light %d, recording %d, keep %d days\n",
	       path, image_flip, image_mirror, ir_mode >= 0 ? ir_names[ir_mode] : "-", white_light,
	       rec_on, keep_days);
}

static void settings_save(void)
{
	char path[160], buf[256];
	size_t pos = 0;

	if (image_flip >= 0)
		pos += snprintf(buf + pos, sizeof(buf) - pos, "FLIP=%d\n", image_flip);
	if (image_mirror >= 0)
		pos += snprintf(buf + pos, sizeof(buf) - pos, "MIRROR=%d\n", image_mirror);
	if (ir_mode >= 0)
		pos += snprintf(buf + pos, sizeof(buf) - pos, "IR=%s\n", ir_names[ir_mode]);
	if (white_light >= 0)
		pos += snprintf(buf + pos, sizeof(buf) - pos, "WHITE=%d\n", white_light);
	if (rec_on >= 0)
		pos += snprintf(buf + pos, sizeof(buf) - pos, "REC=%d\n", rec_on);
	pos += snprintf(buf + pos, sizeof(buf) - pos, "KEEP_DAYS=%d\n", keep_days);
	sd_path(path, sizeof(path), "debug/camera.conf");
	if (write_text(path, buf, pos) < 0)
		logmsg("cannot save %s: %s\n", path, strerror(errno));
}

/* Keep our settings in case anyka_ipc resets them (it does at startup). */
static void *settings_keeper(void *arg)
{
	(void)arg;
	for (;;) {
		sleep(60);
		image_apply();
		white_apply();
		record_apply();
		if (ir_pending)
			ir_apply();
	}
	return NULL;
}

static void handle_image(int fd, const char *query)
{
	const char *p;
	char body[64];
	int flip = 0, mirror = 0;

	if (query && (strstr(query, "flip=") || strstr(query, "mirror="))) {
		if ((p = strstr(query, "flip=")))
			image_flip = p[5] == '1';
		if ((p = strstr(query, "mirror=")))
			image_mirror = p[7] == '1';
		image_apply();
		settings_save();
		logmsg("image: flip %d, mirror %d (set from browser)\n", image_flip, image_mirror);
	}
	ak_vi_get_flip_mirror(VI_HANDLE, &flip, &mirror);
	snprintf(body, sizeof(body), "{\"flip\":%d,\"mirror\":%d}\n", flip ? 1 : 0, mirror ? 1 : 0);
	send_status(fd, "200 OK", body);
}

static void handle_light(int fd, const char *query)
{
	const char *p;
	char body[64];
	int mode;

	if (query && (p = strstr(query, "ir=")) && (mode = ir_from_name(p + 3)) >= 0) {
		ir_mode = mode;
		ir_apply();
		settings_save();
		logmsg("night vision: IR %s (set from browser)\n", ir_names[ir_mode]);
	}
	if (query && (p = strstr(query, "white="))) {
		white_light = p[6] == '1';
		white_apply();
		settings_save();
		logmsg("white light: %d (set from browser)\n", white_light);
	}
	snprintf(body, sizeof(body), "{\"ir\":\"%s\",\"white\":%d}\n",
		 ir_names[ir_mode >= 0 ? ir_mode : IR_AUTO], white_light > 0);
	send_status(fd, "200 OK", body);
}

/* ---------- pan/tilt motors ---------- */

static const char *const ptz_names[] = { "stopped", "up", "down", "left", "right" };
static pthread_mutex_t ptz_lock = PTHREAD_MUTEX_INITIALIZER;
static int ptz_dir;			/* 0 = stopped, else YI_PTZ_DIRECTION */
static unsigned long long ptz_until;	/* ms; stop if no command came before this */

static unsigned long long now_ms(void)
{
	struct timeval tv;

	gettimeofday(&tv, NULL);
	return (unsigned long long)tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

static void ptz_stop_locked(void)
{
	if (ptz_dir) {
		yi_p2p_on_ptz_direction_ctrl_stop();
		ptz_dir = 0;
	}
}

/* A lost connection or closed page must not leave the motor running. */
static void *ptz_watchdog(void *arg)
{
	(void)arg;
	for (;;) {
		usleep(100000);
		pthread_mutex_lock(&ptz_lock);
		if (ptz_dir && now_ms() > ptz_until) {
			ptz_stop_locked();
			logmsg("ptz: stopped, no command from the browser\n");
		}
		pthread_mutex_unlock(&ptz_lock);
	}
	return NULL;
}

static void handle_ptz(int fd, const char *query)
{
	const char *p = query ? strstr(query, "dir=") : NULL;
	int dir, i;

	if (!p) {
		send_status(fd, "400 Bad Request", "missing dir\n");
		return;
	}
	for (dir = -1, i = 0; i < 5; i++)
		if (!strncmp(p + 4, ptz_names[i], strlen(ptz_names[i])) ||
		    (i == 0 && !strncmp(p + 4, "stop", 4)))
			dir = i;
	if (dir < 0) {
		send_status(fd, "400 Bad Request", "dir must be up, down, left, right or stop\n");
		return;
	}
	pthread_mutex_lock(&ptz_lock);
	if (dir == 0) {
		ptz_stop_locked();
	} else {
		/* Repeating the same direction only extends the deadline;
		 * re-issuing it would stop and restart the motor. */
		if (ptz_dir != dir) {
			yi_p2p_on_ptz_direction_ctrl(dir, 0);
			ptz_dir = dir;
		}
		ptz_until = now_ms() + PTZ_HOLD_MS;
	}
	pthread_mutex_unlock(&ptz_lock);
	send_status(fd, "200 OK", "ok\n");
}

/* ---------- recordings on the SD card ---------- */

/* '#' is a digit, everything else must match exactly. */
static int match(const char *s, const char *pat)
{
	for (; *pat; s++, pat++)
		if (*pat == '#' ? !(*s >= '0' && *s <= '9') : *s != *pat)
			return 0;
	return *s == '\0';
}

static int is_hour_dir(const char *n) { return match(n, "####Y##M##D##H"); }
static int is_day(const char *n)      { return match(n, "####Y##M##D"); }

static int is_rec_file(const char *n)
{
	size_t len = strlen(n);

	return safe_name(n) && len > 4 && !strcmp(n + len - 4, ".mp4");
}

/* "26M18S41.mp4": starts at minute 26, second 18 (and lasts 41 s). */
static int has_start_time(const char *n)
{
	return digits(n, 2) >= 0 && n[2] == 'M' && digits(n + 3, 2) >= 0 && n[5] == 'S';
}

/* Hour folders are named in the camera's local time (TZ from time_zone.sh). */
static time_t hour_dir_time(const char *n)
{
	struct tm tm;

	memset(&tm, 0, sizeof(tm));
	tm.tm_year = digits(n, 4) - 1900;
	tm.tm_mon = digits(n + 5, 2) - 1;
	tm.tm_mday = digits(n + 8, 2);
	tm.tm_hour = digits(n + 11, 2);
	tm.tm_isdst = -1;
	return mktime(&tm);
}

static void hour_dir_name(time_t t, char *out, size_t size)
{
	struct tm tm;

	localtime_r(&t, &tm);
	snprintf(out, size, "%04dY%02dM%02dD%02dH",
		 tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour);
}

static int name_cmp(const void *a, const void *b)
{
	return strcmp(*(char *const *)a, *(char *const *)b);
}

/* Sorted names in a directory that pass want(); free with free_list(). */
static int list_dir(const char *path, int (*want)(const char *), char ***out)
{
	struct dirent *e;
	char **v = NULL, **nv;
	int n = 0, cap = 0;
	DIR *d;

	*out = NULL;
	d = opendir(path);
	if (!d)
		return 0;
	while ((e = readdir(d))) {
		if (!want(e->d_name))
			continue;
		if (n == cap) {
			cap = cap ? cap * 2 : 64;
			nv = realloc(v, cap * sizeof(*v));
			if (!nv)
				break;
			v = nv;
		}
		if (!(v[n] = strdup(e->d_name)))
			break;
		n++;
	}
	closedir(d);
	if (n)
		qsort(v, n, sizeof(*v), name_cmp);
	*out = v;
	return n;
}

static void free_list(char **v, int n)
{
	while (n-- > 0)
		free(v[n]);
	free(v);
}

static long file_size(const char *path)
{
	long size;
	int f = open(path, O_RDONLY);

	if (f < 0)
		return -1;
	size = lseek(f, 0, SEEK_END);
	close(f);
	return size;
}

/* GET /rec: the hour folders; GET /rec?d=FOLDER: its files with sizes. */
static void handle_rec_list(int fd, const char *query)
{
	char path[160], file[200], d[32], now[32];
	struct sbuf b = { 0 };
	char **v;
	int n, i;

	if (query && form_get(query, "d", d, sizeof(d)) != 0) {
		if (!is_hour_dir(d)) {
			send_status(fd, "400 Bad Request", "d must be a folder like 2026Y10M19D19H\n");
			return;
		}
		snprintf(path, sizeof(path), "%s/record/%s", sd_dir, d);
		n = list_dir(path, is_rec_file, &v);
		sb_printf(&b, "{\"d\":\"%s\",\"files\":[", d);
		for (i = 0; i < n; i++) {
			snprintf(file, sizeof(file), "%s/%s", path, v[i]);
			sb_printf(&b, "%s{\"n\":\"%s\",\"s\":%ld}", i ? "," : "", v[i], file_size(file));
		}
	} else {
		sd_path(path, sizeof(path), "record");
		n = list_dir(path, is_hour_dir, &v);
		hour_dir_name(time(NULL), now, sizeof(now));
		sb_printf(&b, "{\"now\":\"%s\",\"clock\":%d,\"dirs\":[", now, time(NULL) >= SANE_TIME);
		for (i = 0; i < n; i++)
			sb_printf(&b, "%s\"%s\"", i ? "," : "", v[i]);
	}
	sb_add(&b, "]}\n", 3);
	free_list(v, n);
	send_json(fd, &b);
}

/* "bytes=A-B", "bytes=A-" or "bytes=-N" (the last N); one range only. */
static int parse_range(const char *r, long size, long *start, long *end)
{
	long a, b;
	char *e;

	if (strncmp(r, "bytes=", 6))
		return -1;
	r += 6;
	if (*r == '-') {
		b = strtol(r + 1, &e, 10);
		if (e == r + 1 || b <= 0)
			return -1;
		a = size > b ? size - b : 0;
		b = size - 1;
	} else {
		a = strtol(r, &e, 10);
		if (e == r || *e != '-' || a < 0)
			return -1;
		r = e + 1;
		b = (*r >= '0' && *r <= '9') ? strtol(r, &e, 10) : size - 1;
		if (b >= size)
			b = size - 1;
	}
	if (a >= size || a > b)
		return -1;
	*start = a;
	*end = b;
	return 0;
}

/*
 * GET /rec/FOLDER/FILE. Range requests let the browser seek, and fetch the
 * index (moov) that anyka_ipc writes at the end of the file. Plain read/send
 * rather than sendfile(): sendfile has no MSG_NOSIGNAL, and a SIGPIPE would
 * kill anyka_ipc.
 */
static void serve_recording(int fd, char *rel, const char *range, int download)
{
	char path[200], hdr[512], cr[80] = "", cd[96] = "", buf[8192];
	char *file = strchr(rel, '/');
	long size, start = 0, end, left;
	ssize_t n;
	int f;

	if (!file) {
		send_status(fd, "404 Not Found", "not found\n");
		return;
	}
	*file++ = '\0';
	if (!is_hour_dir(rel) || !is_rec_file(file)) {
		send_status(fd, "404 Not Found", "not found\n");
		return;
	}
	snprintf(path, sizeof(path), "%s/record/%s/%s", sd_dir, rel, file);
	f = open(path, O_RDONLY);
	if (f < 0) {
		send_status(fd, "404 Not Found", "not found\n");
		return;
	}
	size = lseek(f, 0, SEEK_END);
	end = size - 1;
	if (range[0]) {
		if (parse_range(range, size, &start, &end) < 0) {
			snprintf(hdr, sizeof(hdr), "HTTP/1.1 416 Range Not Satisfiable\r\n"
				 "Content-Range: bytes */%ld\r\nContent-Length: 0\r\nConnection: close\r\n\r\n", size);
			send_str(fd, hdr);
			close(f);
			return;
		}
		snprintf(cr, sizeof(cr), "Content-Range: bytes %ld-%ld/%ld\r\n", start, end, size);
	}
	if (download) {
		/* 2026Y10M19D19H + 26M18S41.mp4 -> 2026-10-19_19-26-18.mp4 */
		if (has_start_time(file))
			snprintf(cd, sizeof(cd), "Content-Disposition: attachment; filename=\"%.4s-%.2s-%.2s_%.2s-%.2s-%.2s.mp4\"\r\n",
				 rel, rel + 5, rel + 8, rel + 11, file, file + 3);
		else
			snprintf(cd, sizeof(cd), "Content-Disposition: attachment; filename=\"%s\"\r\n", file);
	}
	snprintf(hdr, sizeof(hdr),
		 "HTTP/1.1 %s\r\nContent-Type: video/mp4\r\nContent-Length: %ld\r\nAccept-Ranges: bytes\r\n"
		 "%s%sCache-Control: private, max-age=3600\r\nConnection: close\r\n\r\n",
		 cr[0] ? "206 Partial Content" : "200 OK", end - start + 1, cr, cd);
	/* A paused video element stops reading for a while; do not give up on it at once. */
	set_timeout(fd, SO_SNDTIMEO, 30);
	if (send_str(fd, hdr) == 0 && lseek(f, start, SEEK_SET) == start) {
		for (left = end - start + 1; left > 0; left -= n) {
			n = read(f, buf, left < (long)sizeof(buf) ? (size_t)left : sizeof(buf));
			if (n <= 0 || send_all(fd, buf, n, 0) < 0)
				break;
		}
	}
	close(f);
}

/*
 * Deletes every file in an hour folder, then the folder. The folder anyka_ipc
 * is recording into stays: it moves each finished minute there.
 */
static int delete_hour(const char *dir, const char *now_dir)
{
	char path[160], file[200];
	char **v;
	int n, i, count = 0;

	snprintf(path, sizeof(path), "%s/record/%s", sd_dir, dir);
	n = list_dir(path, safe_name, &v);
	for (i = 0; i < n; i++) {
		snprintf(file, sizeof(file), "%s/%s", path, v[i]);
		if (unlink(file) == 0)
			count++;
	}
	free_list(v, n);
	if (strcmp(dir, now_dir))
		rmdir(path);
	return count;
}

/* POST /rec/delete p=DAY | FOLDER | FOLDER/FILE */
static void handle_rec_delete(int fd, const char *body)
{
	char p[64], path[160], now[32];
	char *file;
	struct sbuf b = { 0 };
	char **v;
	int n, i, count = 0;

	if (form_get(body, "p", p, sizeof(p)) <= 0) {
		send_status(fd, "400 Bad Request", "missing p\n");
		return;
	}
	hour_dir_name(time(NULL), now, sizeof(now));
	file = strchr(p, '/');
	if (file) {
		*file++ = '\0';
		if (!is_hour_dir(p) || !is_rec_file(file)) {
			send_status(fd, "400 Bad Request", "bad file\n");
			return;
		}
		snprintf(path, sizeof(path), "%s/record/%s/%s", sd_dir, p, file);
		count = unlink(path) == 0;
		snprintf(path, sizeof(path), "%s/record/%s", sd_dir, p);
		if (strcmp(p, now))
			rmdir(path);	/* only succeeds once the folder is empty */
		file[-1] = '/';
	} else if (is_hour_dir(p)) {
		count = delete_hour(p, now);
	} else if (is_day(p)) {
		sd_path(path, sizeof(path), "record");
		n = list_dir(path, is_hour_dir, &v);
		for (i = 0; i < n; i++)
			if (!strncmp(v[i], p, strlen(p)))
				count += delete_hour(v[i], now);
		free_list(v, n);
	} else {
		send_status(fd, "400 Bad Request", "p must be a day, an hour folder or a file\n");
		return;
	}
	logmsg("deleted %s: %d recordings (from browser)\n", p, count);
	sb_printf(&b, "{\"deleted\":%d}\n", count);
	send_json(fd, &b);
}

/*
 * Deletes hour folders that ended more than keep_days ago. Only with a real
 * clock, and only folders named with one: minutes recorded before the camera
 * had the time (1970..., an old firmware date) are left for the user.
 */
static void retention_run(void)
{
	char path[160], now_dir[32];
	time_t now = time(NULL), t;
	int days = keep_days, n, i, hours = 0, files = 0;
	char **v;

	if (days <= 0 || now < SANE_TIME)
		return;
	sd_path(path, sizeof(path), "record");
	n = list_dir(path, is_hour_dir, &v);
	hour_dir_name(now, now_dir, sizeof(now_dir));
	for (i = 0; i < n; i++) {
		t = hour_dir_time(v[i]);
		if (t < SANE_TIME || t + 3600 > now - (time_t)days * 86400)
			continue;
		files += delete_hour(v[i], now_dir);
		hours++;
	}
	free_list(v, n);
	if (hours)
		logmsg("deleted %d hours of recordings (%d files) older than %d days\n", hours, files, days);
}

/* GET /record: state; POST /record on=0|1, keep=DAYS */
static void handle_record(int fd, const char *body)
{
	char v[16], now[32];
	struct statfs st;
	unsigned long total = 0, avail = 0;
	struct sbuf b = { 0 };
	int d;

	if (body && form_get(body, "on", v, sizeof(v)) > 0) {
		rec_on = v[0] == '1';
		AkSetRecordMode(rec_on ? 1 : 0);
		settings_save();
		logmsg("recording %s (set from browser)\n", rec_on ? "on" : "off");
	}
	if (body && form_get(body, "keep", v, sizeof(v)) > 0) {
		d = atoi(v);
		if (d >= 0 && d <= 3650 && d != keep_days) {
			keep_days = d;
			settings_save();
			rec_wakeup = 1;
			logmsg("recordings kept for %d days, 0 = until the card is full (set from browser)\n", d);
		}
	}
	if (statfs(sd_dir, &st) == 0) {
		total = (unsigned long)(((unsigned long long)st.f_blocks * st.f_bsize) >> 20);
		avail = (unsigned long)(((unsigned long long)st.f_bavail * st.f_bsize) >> 20);
	}
	hour_dir_name(time(NULL), now, sizeof(now));
	sb_printf(&b, "{\"on\":%d,\"keep\":%d,\"clock\":%d,\"now\":\"%s\",\"total_mb\":%lu,\"free_mb\":%lu}\n",
		  rec_on != 0, keep_days, time(NULL) >= SANE_TIME, now, total, avail);
	send_json(fd, &b);
}

/* ---------- copying recordings to an FTP server ---------- */

struct upload_cfg {
	int on;
	int port;
	char host[64];
	char user[64];
	char pass[64];
	char path[128];
};

/* All guarded by up_lock. */
static pthread_mutex_t up_lock = PTHREAD_MUTEX_INITIALIZER;
static struct upload_cfg up = { 0, 21, "", "", "", "" };
static unsigned up_gen;			/* bumped on every change, so a running pass stops */
static char up_marker[48];		/* last recording sent, "FOLDER/FILE"; "" = start from the newest */
static char up_last[48];		/* the same, for the page */
static time_t up_last_at;
static char up_error[200];
static time_t up_error_at;
static int up_pending;
static int up_busy;

struct ftp {
	int fd;
	struct in_addr ip;
	size_t len;
	char buf[1024];		/* received, not yet read as lines */
	char line[256];		/* the last reply line, for error messages */
	char home[128];		/* the directory after login */
	char cwd[200];		/* where the last ftp_cd() went */
};

/* A function, not a macro: the argument is usually an ftp_cmd() call. */
static int ftp_ok(int code)
{
	return code >= 200 && code < 300;
}

static int tcp_connect(struct in_addr ip, int port)
{
	struct sockaddr_in a;
	int fd, e;

	fd = socket(AF_INET, SOCK_STREAM, 0);
	if (fd < 0)
		return -1;
	set_timeout(fd, SO_SNDTIMEO, FTP_TIMEOUT_S);	/* also limits connect() */
	set_timeout(fd, SO_RCVTIMEO, FTP_TIMEOUT_S);
	memset(&a, 0, sizeof(a));
	a.sin_family = AF_INET;
	a.sin_port = htons(port);
	a.sin_addr = ip;
	if (connect(fd, (struct sockaddr *)&a, sizeof(a)) < 0) {
		e = errno;
		close(fd);
		errno = e;
		return -1;
	}
	return fd;
}

static int ftp_line(struct ftp *f)
{
	char *nl;
	size_t n;
	ssize_t r;

	for (;;) {
		nl = memchr(f->buf, '\n', f->len);
		if (nl) {
			n = nl - f->buf + 1;
			snprintf(f->line, sizeof(f->line), "%.*s", (int)(n - 1), f->buf);
			if ((nl = strchr(f->line, '\r')))
				*nl = '\0';
			memmove(f->buf, f->buf + n, f->len - n);
			f->len -= n;
			return 0;
		}
		if (f->len == sizeof(f->buf))
			return -1;
		r = recv(f->fd, f->buf + f->len, sizeof(f->buf) - f->len, 0);
		if (r < 0 && errno == EINTR)
			continue;
		if (r <= 0)
			return -1;
		f->len += r;
	}
}

/* The reply code; multi-line replies (123-... 123 ...) are read to the end. */
static int ftp_reply(struct ftp *f)
{
	int code;

	if (ftp_line(f) < 0 || (code = digits(f->line, 3)) < 0) {
		snprintf(f->line, sizeof(f->line), "no reply");
		return -1;
	}
	if (f->line[3] == '-') {
		do {
			if (ftp_line(f) < 0)
				return -1;
		} while (!(digits(f->line, 3) == code && (f->line[3] == ' ' || f->line[3] == '\0')));
	}
	return code;
}

static int ftp_cmd(struct ftp *f, const char *fmt, ...) __attribute__((format(printf, 2, 3)));

static int ftp_cmd(struct ftp *f, const char *fmt, ...)
{
	char cmd[300];
	va_list ap;
	int n;

	va_start(ap, fmt);
	n = vsnprintf(cmd, sizeof(cmd) - 2, fmt, ap);
	va_end(ap);
	if (n < 0 || n >= (int)sizeof(cmd) - 2)
		return -1;
	memcpy(cmd + n, "\r\n", 2);
	if (send_all(f->fd, cmd, n + 2, 0) < 0) {
		snprintf(f->line, sizeof(f->line), "connection lost");
		return -1;
	}
	return ftp_reply(f);
}

static void ftp_close(struct ftp *f)
{
	if (f->fd >= 0) {
		ftp_cmd(f, "QUIT");
		close(f->fd);
		f->fd = -1;
	}
}

static int ftp_login(struct ftp *f, const struct upload_cfg *c, char *err, size_t errlen)
{
	char *q, *e;
	int code;

	memset(f, 0, sizeof(*f));
	f->fd = -1;
	if (!inet_aton(c->host, &f->ip)) {
		snprintf(err, errlen, "adresa servera mora biti IP adresa, npr. 192.168.1.10 (kamera nema DNS)");
		return -1;
	}
	f->fd = tcp_connect(f->ip, c->port);
	if (f->fd < 0) {
		snprintf(err, errlen, "nema veze sa %s:%d (%.100s)", c->host, c->port, strerror(errno));
		return -1;
	}
	if (ftp_reply(f) != 220) {
		snprintf(err, errlen, "na %s:%d nije FTP server (%.100s)", c->host, c->port, f->line);
		return -1;
	}
	code = ftp_cmd(f, "USER %s", c->user[0] ? c->user : "anonymous");
	if (code == 331 || code == 332)
		code = ftp_cmd(f, "PASS %s", c->pass);
	if (!ftp_ok(code)) {
		snprintf(err, errlen, "prijava nije uspjela (%.100s)", f->line);
		return -1;
	}
	if (!ftp_ok(ftp_cmd(f, "TYPE I"))) {
		snprintf(err, errlen, "server ne da binarni prijenos (%.100s)", f->line);
		return -1;
	}
	/* 257 "/home/kamera" is the current directory */
	if (ftp_cmd(f, "PWD") == 257 && (q = strchr(f->line, '"')) && (e = strchr(q + 1, '"')))
		snprintf(f->home, sizeof(f->home), "%.*s", (int)(e - q - 1), q + 1);
	else
		strcpy(f->home, "/");
	return 0;
}

/* Into dir (absolute, or relative to the login directory), creating what is missing. */
static int ftp_cd(struct ftp *f, const char *dir, char *err, size_t errlen)
{
	char part[128];
	const char *p = dir;
	size_t n;

	if (f->cwd[0] && !strcmp(f->cwd, dir))
		return 0;
	f->cwd[0] = '\0';
	if (!ftp_ok(ftp_cmd(f, "CWD %s", *dir == '/' ? "/" : f->home)))
		goto fail;
	for (;;) {
		while (*p == '/')
			p++;
		if (!*p)
			break;
		n = strcspn(p, "/");
		if (n >= sizeof(part))
			goto fail;
		memcpy(part, p, n);
		part[n] = '\0';
		p += n;
		if (ftp_ok(ftp_cmd(f, "CWD %s", part)))
			continue;
		ftp_cmd(f, "MKD %s", part);
		if (!ftp_ok(ftp_cmd(f, "CWD %s", part)))
			goto fail;
	}
	snprintf(f->cwd, sizeof(f->cwd), "%s", dir);
	return 0;
fail:
	snprintf(err, errlen, "ne mogu otvoriti ni napraviti mapu \"%s\" (%.100s)", dir, f->line);
	return -1;
}

/* A data connection; the address comes from the control connection, not the
 * PASV reply, which is often wrong behind NAT. */
static int ftp_pasv(struct ftp *f)
{
	unsigned long v[6];
	const char *s;
	char *e;
	int i;

	if (ftp_cmd(f, "PASV") != 227)
		return -1;
	for (s = f->line + 3; *s && !(*s >= '0' && *s <= '9'); s++)
		;
	for (i = 0; i < 6; i++) {
		v[i] = strtoul(s, &e, 10);
		if (e == s || v[i] > 255 || (i < 5 && *e != ','))
			return -1;
		s = e + 1;
	}
	return tcp_connect(f->ip, v[4] * 256 + v[5]);
}

/*
 * Sends src (or, if src < 0, a short test text) to dir/name. It goes up as
 * name.part and is renamed when complete, so the server never shows half a
 * recording under its real name.
 */
static int ftp_put(struct ftp *f, const char *dir, const char *name, int src, char *err, size_t errlen)
{
	static const char test_text[] = "localcam: test, safe to delete\n";
	char part[96], buf[8192];
	ssize_t n = 0;
	int data, code, failed = 0;

	if (ftp_cd(f, dir, err, errlen) < 0)
		return -1;
	snprintf(part, sizeof(part), "%s.part", name);
	data = ftp_pasv(f);
	if (data < 0) {
		snprintf(err, errlen, "pasivni prijenos ne radi (%.100s)", f->line);
		return -1;
	}
	code = ftp_cmd(f, "STOR %s", part);
	if (code != 150 && code != 125) {
		close(data);
		snprintf(err, errlen, "server ne da spremiti %s (%.100s)", name, f->line);
		return -1;
	}
	if (src < 0) {
		failed = send_all(data, test_text, sizeof(test_text) - 1, 0) < 0;
	} else {
		while ((n = read(src, buf, sizeof(buf))) > 0)
			if (send_all(data, buf, n, 0) < 0)
				break;
		failed = n != 0;
	}
	close(data);
	code = ftp_reply(f);
	if (failed || !ftp_ok(code)) {
		snprintf(err, errlen, "prijenos %s prekinut (%.100s)", name, f->line);
		return -1;
	}
	if (ftp_cmd(f, "RNFR %s", part) != 350 || !ftp_ok(ftp_cmd(f, "RNTO %s", name))) {
		/* some servers will not rename over an existing file */
		ftp_cmd(f, "DELE %s", name);
		if (ftp_cmd(f, "RNFR %s", part) != 350 || !ftp_ok(ftp_cmd(f, "RNTO %s", name))) {
			snprintf(err, errlen, "ne mogu preimenovati %s.part (%.100s)", name, f->line);
			return -1;
		}
	}
	return 0;
}

/* The server's clock: the modification time of a file just written (UTC). */
static time_t ftp_mdtm(struct ftp *f, const char *name)
{
	struct tm tm;
	const char *s = f->line + 4;

	if (ftp_cmd(f, "MDTM %s", name) != 213)
		return 0;
	memset(&tm, 0, sizeof(tm));
	tm.tm_year = digits(s, 4) - 1900;
	tm.tm_mon = digits(s + 4, 2) - 1;
	tm.tm_mday = digits(s + 6, 2);
	tm.tm_hour = digits(s + 8, 2);
	tm.tm_min = digits(s + 10, 2);
	tm.tm_sec = digits(s + 12, 2);
	if (tm.tm_year < 0 || tm.tm_mon < 0 || tm.tm_mday < 0 || tm.tm_hour < 0 ||
	    tm.tm_min < 0 || tm.tm_sec < 0)
		return 0;
	return timegm(&tm);
}

/*
 * Writes, renames and deletes a test file in the upload folder, and reads the
 * server's clock from it. The camera takes that time only when it has none
 * (after a power cut, before any browser opened the page): a server whose
 * MDTM is not in UTC would otherwise fight the browser over the time.
 */
static int ftp_check(struct ftp *f, const char *path, char *err, size_t errlen, time_t *server_time)
{
	static const char name[] = ".localcam-test";
	struct timeval tv;
	time_t t;

	if (ftp_put(f, path, name, -1, err, errlen) < 0)
		return -1;
	t = ftp_mdtm(f, name);
	ftp_cmd(f, "DELE %s", name);
	if (server_time)
		*server_time = t;
	if (t >= SANE_TIME && time(NULL) < SANE_TIME) {
		tv.tv_sec = t;
		tv.tv_usec = 0;
		if (settimeofday(&tv, NULL) == 0)
			logmsg("clock set from the FTP server\n");
	}
	return 0;
}

/* No control characters: they would end up in FTP commands and in upload.conf. */
static int plain_text(const char *s)
{
	for (; *s; s++)
		if ((unsigned char)*s < 0x20 || *s == 0x7f)
			return 0;
	return 1;
}

/* Fills c from a form; an empty or missing pass keeps the one in c. */
static int upload_form(const char *body, struct upload_cfg *c, char *err, size_t errlen)
{
	struct in_addr ip;
	char v[16], pass[sizeof(c->pass)];
	int r = 0;

	if (form_get(body, "on", v, sizeof(v)) > 0)
		c->on = v[0] == '1';
	if (form_get(body, "port", v, sizeof(v)) > 0)
		c->port = v[0] ? atoi(v) : 21;
	if (form_get(body, "host", c->host, sizeof(c->host)) < 0 ||
	    form_get(body, "user", c->user, sizeof(c->user)) < 0 ||
	    form_get(body, "path", c->path, sizeof(c->path)) < 0 ||
	    (r = form_get(body, "pass", pass, sizeof(pass))) < 0) {
		snprintf(err, errlen, "predugo: adresa, korisnik i lozinka do 63 znaka, mapa do 127");
		return -1;
	}
	if (r > 0 && pass[0])
		strcpy(c->pass, pass);
	if (!plain_text(c->host) || !plain_text(c->user) || !plain_text(c->pass) || !plain_text(c->path)) {
		snprintf(err, errlen, "nedozvoljeni znakovi");
		return -1;
	}
	if (c->port < 1 || c->port > 65535) {
		snprintf(err, errlen, "port mora biti od 1 do 65535");
		return -1;
	}
	if ((c->on || c->host[0]) && !inet_aton(c->host, &ip)) {
		snprintf(err, errlen, "adresa servera mora biti IP adresa, npr. 192.168.1.10 (kamera nema DNS)");
		return -1;
	}
	return 0;
}

static void upload_load(void)
{
	char path[160], buf[1024], v[16];

	sd_path(path, sizeof(path), "debug/upload.conf");
	pthread_mutex_lock(&up_lock);
	if (read_text(path, buf, sizeof(buf)) >= 0) {
		if (conf_get(buf, "UPLOAD", v, sizeof(v)))
			up.on = atoi(v) == 1;
		if (conf_get(buf, "FTP_PORT", v, sizeof(v)) && atoi(v) > 0 && atoi(v) < 65536)
			up.port = atoi(v);
		conf_get(buf, "FTP_HOST", up.host, sizeof(up.host));
		conf_get(buf, "FTP_USER", up.user, sizeof(up.user));
		conf_get(buf, "FTP_PASS", up.pass, sizeof(up.pass));
		conf_get(buf, "FTP_PATH", up.path, sizeof(up.path));
	}
	sd_path(path, sizeof(path), "debug/upload.state");
	if (read_text(path, buf, sizeof(buf)) >= 0)
		conf_get(buf, "LAST", up_marker, sizeof(up_marker));
	pthread_mutex_unlock(&up_lock);
	if (up.on)
		logmsg("upload to ftp://%s:%d%s%s, last sent %s\n", up.host, up.port,
		       up.path[0] == '/' ? "" : "/", up.path,
		       up_marker[0] ? up_marker : "-");
}

/* Called with up_lock held. */
static void upload_save_locked(void)
{
	char path[160], buf[600];
	int n;

	n = snprintf(buf, sizeof(buf),
		     "# Written by the camera's web page. The password is in plain text.\n"
		     "UPLOAD=%d\nFTP_HOST=%s\nFTP_PORT=%d\nFTP_USER=%s\nFTP_PASS=%s\nFTP_PATH=%s\n",
		     up.on, up.host, up.port, up.user, up.pass, up.path);
	sd_path(path, sizeof(path), "debug/upload.conf");
	if (write_text(path, buf, n) < 0)
		logmsg("cannot save %s: %s\n", path, strerror(errno));
}

static void upload_set_marker(const char *m)
{
	char path[160], buf[80];
	int n;

	pthread_mutex_lock(&up_lock);
	snprintf(up_marker, sizeof(up_marker), "%s", m);
	pthread_mutex_unlock(&up_lock);
	n = snprintf(buf, sizeof(buf), "LAST=%s\n", m);
	sd_path(path, sizeof(path), "debug/upload.state");
	write_text(path, buf, n);
}

static void upload_set_error(const char *err)
{
	int changed;

	pthread_mutex_lock(&up_lock);
	changed = strcmp(up_error, err) != 0;
	snprintf(up_error, sizeof(up_error), "%s", err);
	up_error_at = time(NULL);
	pthread_mutex_unlock(&up_lock);
	if (changed)
		logmsg("upload: %s\n", err);
}

/* The newest recording, "FOLDER/FILE", or "0" (sorts before every folder) if there is none. */
static void newest_recording(char **dirs, int nd, char *out, size_t size)
{
	char path[160];
	char **v;
	int n;

	snprintf(out, size, "0");
	while (nd-- > 0) {
		snprintf(path, sizeof(path), "%s/record/%s", sd_dir, dirs[nd]);
		n = list_dir(path, is_rec_file, &v);
		if (n)
			snprintf(out, size, "%s/%s", dirs[nd], v[n - 1]);
		free_list(v, n);
		if (n)
			return;
	}
}

/*
 * One pass: sends every recording that sorts after the marker (folder and
 * file names sort in time order), oldest first, as PATH/2026-10-19/19-26-18.mp4.
 * Returns -1 on an error, to be retried later.
 */
static int upload_pass(void)
{
	struct upload_cfg c;
	struct ftp f;
	char marker[48], path[160], local[200], dir[200], name[32], item[48], err[200];
	char **dirs, **files, **todo = NULL;
	unsigned gen;
	int nd, nf, i, j, ntodo = 0, pending = 0, src, ret = 0;
	size_t plen;

	pthread_mutex_lock(&up_lock);
	c = up;
	gen = up_gen;
	snprintf(marker, sizeof(marker), "%s", up_marker);
	pthread_mutex_unlock(&up_lock);
	if (!c.on || !c.host[0]) {
		up_pending = 0;
		return 0;
	}

	sd_path(path, sizeof(path), "record");
	nd = list_dir(path, is_hour_dir, &dirs);
	if (!marker[0]) {
		/* just switched on: what is on the card already is not sent */
		newest_recording(dirs, nd, marker, sizeof(marker));
		upload_set_marker(marker);
	}
	todo = malloc(UPLOAD_BATCH * sizeof(*todo));
	for (i = 0; todo && i < nd; i++) {
		if (strncmp(dirs[i], marker, 14) < 0)
			continue;
		snprintf(path, sizeof(path), "%s/record/%s", sd_dir, dirs[i]);
		nf = list_dir(path, is_rec_file, &files);
		for (j = 0; j < nf; j++) {
			snprintf(item, sizeof(item), "%s/%s", dirs[i], files[j]);
			if (strcmp(item, marker) <= 0)
				continue;
			pending++;
			if (ntodo < UPLOAD_BATCH && (todo[ntodo] = strdup(item)))
				ntodo++;
		}
		free_list(files, nf);
	}
	free_list(dirs, nd);
	up_pending = pending;
	if (!ntodo && time(NULL) >= SANE_TIME)
		goto out;

	if (ftp_login(&f, &c, err, sizeof(err)) < 0 ||
	    (time(NULL) < SANE_TIME && ftp_check(&f, c.path, err, sizeof(err), NULL) < 0)) {
		upload_set_error(err);
		ret = -1;
		goto close;
	}
	plen = strlen(c.path);
	for (i = 0; i < ntodo; i++) {
		char *d = todo[i], *file = strchr(todo[i], '/') + 1;

		snprintf(local, sizeof(local), "%s/record/%s", sd_dir, d);
		src = open(local, O_RDONLY);
		if (src < 0) {
			/* deleted in the meantime */
			upload_set_marker(d);
			continue;
		}
		snprintf(dir, sizeof(dir), "%s%s%.4s-%.2s-%.2s", c.path,
			 plen && c.path[plen - 1] != '/' ? "/" : "", d, d + 5, d + 8);
		if (has_start_time(file))
			snprintf(name, sizeof(name), "%.2s-%.2s-%.2s.mp4", d + 11, file, file + 3);
		else
			snprintf(name, sizeof(name), "%.2s-%s", d + 11, file);
		up_busy = 1;
		ret = ftp_put(&f, dir, name, src, err, sizeof(err));
		up_busy = 0;
		close(src);
		if (ret < 0) {
			upload_set_error(err);
			break;
		}
		upload_set_marker(d);
		pthread_mutex_lock(&up_lock);
		snprintf(up_last, sizeof(up_last), "%s", d);
		up_last_at = time(NULL);
		up_error[0] = '\0';
		up_pending = --pending;
		/* settings changed (or upload switched off): start again with the new ones */
		if (up_gen != gen) {
			pthread_mutex_unlock(&up_lock);
			break;
		}
		pthread_mutex_unlock(&up_lock);
	}
close:
	ftp_close(&f);
out:
	while (ntodo-- > 0)
		free(todo[ntodo]);
	free(todo);
	return ret;
}

static void upload_json(struct sbuf *b)
{
	pthread_mutex_lock(&up_lock);
	sb_printf(b, "{\"on\":%d,\"port\":%d,\"pass\":%d,\"host\":", up.on, up.port, up.pass[0] != '\0');
	sb_json(b, up.host);
	sb_add(b, ",\"user\":", 8);
	sb_json(b, up.user);
	sb_add(b, ",\"path\":", 8);
	sb_json(b, up.path);
	sb_add(b, ",\"last\":", 8);
	sb_json(b, up_last);
	sb_printf(b, ",\"last_at\":%ld,\"pending\":%d,\"busy\":%d,\"error_at\":%ld,\"error\":",
		  (long)up_last_at, up_pending, up_busy, (long)up_error_at);
	sb_json(b, up_error);
	sb_add(b, "}\n", 2);
	pthread_mutex_unlock(&up_lock);
}

/* GET /upload, or POST /upload with the form from the page. */
static void handle_upload(int fd, const char *body)
{
	struct upload_cfg c;
	struct sbuf b = { 0 };
	char err[200];
	int switched_on;

	if (body) {
		pthread_mutex_lock(&up_lock);
		c = up;
		pthread_mutex_unlock(&up_lock);
		if (upload_form(body, &c, err, sizeof(err)) < 0) {
			sb_add(&b, "{\"error\":", 9);
			sb_json(&b, err);
			sb_add(&b, "}\n", 2);
			send_json(fd, &b);
			return;
		}
		pthread_mutex_lock(&up_lock);
		switched_on = c.on && !up.on;
		up = c;
		up_gen++;
		up_error[0] = '\0';
		up_error_at = 0;
		upload_save_locked();
		pthread_mutex_unlock(&up_lock);
		/* send from now on, not everything already on the card */
		if (switched_on)
			upload_set_marker("");
		rec_wakeup = 1;
		logmsg("upload %s: ftp://%s:%d%s%s (set from browser)\n", c.on ? "on" : "off",
		       c.host, c.port, c.path[0] == '/' ? "" : "/", c.path);
	}
	upload_json(&b);
	send_json(fd, &b);
}

/* POST /upload/test: the same form; logs in and writes a test file, saves nothing. */
static void handle_upload_test(int fd, const char *body)
{
	struct upload_cfg c;
	struct ftp f;
	struct sbuf b = { 0 };
	char err[200] = "";
	time_t server_time = 0;
	int ok;

	pthread_mutex_lock(&up_lock);
	c = up;
	pthread_mutex_unlock(&up_lock);
	f.fd = -1;
	ok = upload_form(body, &c, err, sizeof(err)) == 0 &&
	     ftp_login(&f, &c, err, sizeof(err)) == 0 &&
	     ftp_check(&f, c.path, err, sizeof(err), &server_time) == 0;
	ftp_close(&f);
	sb_printf(&b, "{\"ok\":%s,\"server_time\":%ld,\"msg\":", ok ? "true" : "false", (long)server_time);
	sb_json(&b, ok ? "" : err);
	sb_add(&b, "}\n", 2);
	send_json(fd, &b);
}

/*
 * Deletes old recordings now and then and sends new ones to the FTP server.
 * Counts its own seconds: the wall clock jumps when the time gets set.
 */
static void *rec_thread(void *arg)
{
	unsigned long tick, next_retention = 0, next_upload = 0, backoff = 0;
	int every = getenv("LOCALCAM_UPLOAD_EVERY") ? atoi(getenv("LOCALCAM_UPLOAD_EVERY")) : UPLOAD_EVERY_S;

	(void)arg;
	for (tick = 0;; tick++, sleep(1)) {
		if (rec_wakeup) {
			rec_wakeup = 0;
			next_retention = next_upload = tick;
			backoff = 0;
		}
		if (tick >= next_retention) {
			retention_run();
			next_retention = tick + RETENTION_EVERY_S;
		}
		if (tick >= next_upload) {
			if (upload_pass() == 0) {
				backoff = 0;
				next_upload = tick + every;
			} else {
				/* server down: 30 s, 1, 2, 4 min, then every 5 min
				 * (shorter in the test, which sends every second) */
				backoff = backoff ? backoff * 2 : 2UL * every;
				if (backoff > 20UL * every)
					backoff = 20UL * every;
				next_upload = tick + backoff;
			}
		}
	}
	return NULL;
}

/* ---------- diagnostics ---------- */

static size_t append_file(char *buf, size_t pos, size_t size, const char *title, const char *path)
{
	ssize_t n;
	int f;

	pos += snprintf(buf + pos, size - pos, "--- %s\n", title);
	if (pos >= size - 1)
		return size - 1;
	f = open(path, O_RDONLY);
	if (f < 0)
		return pos + snprintf(buf + pos, size - pos, "(cannot read %s)\n", path);
	while (pos < size - 1 && (n = read(f, buf + pos, size - 1 - pos)) > 0)
		pos += n;
	close(f);
	return pos < size - 1 ? pos : size - 1;
}

/* Read-only: lets the network side confirm there is no route out. */
static void handle_status(int fd)
{
	char buf[8192];
	size_t pos = 0, size = sizeof(buf);
	int i;

	pos = append_file(buf, pos, size, "uptime", "/proc/uptime");
	pos = append_file(buf, pos, size, "routes (a default route has Destination 00000000)", "/proc/net/route");
	pos = append_file(buf, pos, size, "DNS servers (/etc/resolv.conf, should be empty)", "/etc/resolv.conf");
	pos = append_file(buf, pos, size, "Wi-Fi link", "/proc/net/wireless");
	pos = append_file(buf, pos, size, "mounts", "/proc/mounts");
	pos += snprintf(buf + pos, size - pos, "--- pan/tilt\n%s\n", ptz_names[ptz_dir]);
	pos += snprintf(buf + pos, size - pos, "--- recording\n%s, kept %d days, clock %s\n",
			rec_on < 0 ? "on (anyka_ipc's own setting)" : rec_on ? "on" : "off", keep_days,
			time(NULL) >= SANE_TIME ? "set" : "NOT SET");
	pthread_mutex_lock(&up_lock);
	if (up.on)
		pos += snprintf(buf + pos, size - pos, "--- upload\nftp://%s:%d%s%s, last sent %s, %d waiting%s%s\n",
				up.host, up.port, up.path[0] == '/' ? "" : "/", up.path, up_marker[0] ? up_marker : "-", up_pending,
				up_error[0] ? ", error: " : "", up_error);
	else
		pos += snprintf(buf + pos, size - pos, "--- upload\noff\n");
	pthread_mutex_unlock(&up_lock);
	pos += snprintf(buf + pos, size - pos, "--- viewers\n");
	for (i = 0; i < MAX_SESSIONS && pos < size - 1; i++) {
		struct session *s = &sessions[i];

		if (s->sid)
			pos += snprintf(buf + pos, size - pos, "sid %u %s: %lu frames, %lu dropped, limit %d bytes\n",
					(unsigned)s->sid, s->hd ? "HD" : "SD", s->frames, s->dropped, s->limit);
	}
	buf[pos < size ? pos : size - 1] = '\0';
	send_status(fd, "200 OK", buf);
}

static void handle_stream(int fd, const char *query)
{
	struct session *s;
	char buf[256];
	int hd = !(query && strstr(query, "hd=0"));
	int sndbuf = STREAM_SNDBUF;
	int waited;
	ssize_t r;

	/* A small send buffer keeps queued_bytes() meaningful. */
	setsockopt(fd, SOL_SOCKET, SO_SNDBUF, &sndbuf, sizeof(sndbuf));
	image_apply();
	s = session_alloc(fd, hd);
	if (s) {
		/* The kernel caps the buffer (net.core.wmem_max); stay under what we
		 * really got, so send() never has to wait. */
		socklen_t optlen = sizeof(sndbuf);
		if (getsockopt(fd, SOL_SOCKET, SO_SNDBUF, &sndbuf, &optlen) == 0 &&
		    sndbuf * 3 / 4 < s->limit)
			s->limit = sndbuf * 3 / 4;
	}
	if (!s) {
		send_status(fd, "503 Service Unavailable", "too many viewers\n");
		return;
	}
	if (send_str(fd, "HTTP/1.1 200 OK\r\nContent-Type: application/octet-stream\r\n"
			 "Cache-Control: no-store\r\nConnection: close\r\n\r\n") < 0 ||
	    yi_p2p_on_new_session(s->sid) != 0) {
		logmsg("sid %u: could not start\n", (unsigned)s->sid);
		session_free(s);
		return;
	}
	logmsg("sid %u: viewer connected (%s)\n", (unsigned)s->sid, hd ? "HD" : "SD");

	/* The browser never sends anything; recv() only tells us when it leaves. */
	set_timeout(fd, SO_RCVTIMEO, 1);
	while (s->state == S_ALIVE) {
		r = recv(fd, buf, sizeof(buf), 0);
		if (r == 0 || (r < 0 && errno != EAGAIN && errno != EWOULDBLOCK && errno != EINTR))
			break;
	}
	pthread_mutex_lock(&s->lock);
	if (s->state == S_ALIVE)
		s->state = S_CLOSED;
	pthread_mutex_unlock(&s->lock);

	/* Wait for anyka_ipc's worker_thread to call yi_p2p_release_session(). */
	for (waited = 0; s->state != S_RELEASED && waited < RELEASE_WAIT_S * 10; waited++)
		usleep(100000);
	logmsg("sid %u: viewer left after %lu frames (%lu dropped on a slow link)\n",
	       (unsigned)s->sid, s->frames, s->dropped);
	session_free(s);
}

/* POST only with "X-Localcam: 1" (see the top of this file); the body is a form. */
static void handle_post(int fd, const char *path, const char *req, const char *body)
{
	char token[8];

	if (strcmp(path, "/record") && strcmp(path, "/rec/delete") &&
	    strcmp(path, "/upload") && strcmp(path, "/upload/test"))
		send_status(fd, "405 Method Not Allowed", "GET only\n");
	else if (!header_get(req, "X-Localcam", token, sizeof(token)) || strcmp(token, "1"))
		send_status(fd, "403 Forbidden", "missing X-Localcam header\n");
	else if (!strcmp(path, "/record"))
		handle_record(fd, body);
	else if (!strcmp(path, "/rec/delete"))
		handle_rec_delete(fd, body);
	else if (!strcmp(path, "/upload"))
		handle_upload(fd, body);
	else
		handle_upload_test(fd, body);
}

static void *client_thread(void *arg)
{
	int fd = (int)(intptr_t)arg;
	char req[REQ_MAX], body[BODY_MAX], range[64] = "", num[16];
	char *hdr_end = NULL, *path, *query, *end;
	size_t len = 0, have = 0;
	long want = 0;
	ssize_t r;
	int post;

	set_timeout(fd, SO_RCVTIMEO, 10);
	set_timeout(fd, SO_SNDTIMEO, 5);
	while (len < sizeof(req) - 1) {
		r = recv(fd, req + len, sizeof(req) - 1 - len, 0);
		if (r <= 0)
			goto out;
		len += r;
		req[len] = '\0';
		if ((hdr_end = strstr(req, "\r\n\r\n")))
			break;
	}
	if (!hdr_end)
		goto out;
	hdr_end += 4;
	post = !strncmp(req, "POST ", 5);
	if (!post && strncmp(req, "GET ", 4) != 0) {
		send_status(fd, "405 Method Not Allowed", "GET or POST only\n");
		goto out;
	}
	if (post && header_get(req, "Content-Length", num, sizeof(num)))
		want = strtol(num, NULL, 10);
	if (want < 0 || want >= (long)sizeof(body)) {
		send_status(fd, "413 Payload Too Large", "too large\n");
		goto out;
	}
	have = len - (hdr_end - req);
	if (have > (size_t)want)
		have = want;
	memcpy(body, hdr_end, have);
	while (have < (size_t)want) {
		r = recv(fd, body + have, want - have, 0);
		if (r <= 0)
			goto out;
		have += r;
	}
	body[have] = '\0';
	header_get(req, "Range", range, sizeof(range));

	/* Headers are read; now the request line is cut up in place. */
	path = req + (post ? 5 : 4);
	end = strchr(path, ' ');
	if (!end)
		goto out;
	*end = '\0';
	query = strchr(path, '?');
	if (query)
		*query++ = '\0';

	if (post)
		handle_post(fd, path, end + 1, body);
	else if (!strcmp(path, "/") || !strcmp(path, "/index.html"))
		serve_file(fd, "index.html");
	else if (!strcmp(path, "/stream"))
		handle_stream(fd, query);
	else if (!strcmp(path, "/status"))
		handle_status(fd);
	else if (!strcmp(path, "/ptz"))
		handle_ptz(fd, query);
	else if (!strcmp(path, "/light"))
		handle_light(fd, query);
	else if (!strcmp(path, "/image"))
		handle_image(fd, query);
	else if (!strcmp(path, "/time"))
		handle_time(fd, query);
	else if (!strcmp(path, "/rec"))
		handle_rec_list(fd, query);
	else if (!strncmp(path, "/rec/", 5))
		serve_recording(fd, path + 5, range, query && strstr(query, "dl=1"));
	else if (!strcmp(path, "/record"))
		handle_record(fd, NULL);
	else if (!strcmp(path, "/upload"))
		handle_upload(fd, NULL);
	else if (path[0] == '/')
		serve_file(fd, path + 1);
out:
	close(fd);
	__sync_fetch_and_sub(&active_clients, 1);
	return NULL;
}

static int open_listener(int port)
{
	struct sockaddr_in addr;
	int fd, one = 1;

	fd = socket(AF_INET, SOCK_STREAM, 0);
	if (fd < 0)
		return -1;
	setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one));
	memset(&addr, 0, sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_port = htons(port);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);
	if (bind(fd, (struct sockaddr *)&addr, sizeof(addr)) < 0 || listen(fd, 8) < 0) {
		close(fd);
		return -1;
	}
	return fd;
}

static void *server_thread(void *arg)
{
	const char *delay = getenv("LOCALCAM_DELAY");
	int port = DEFAULT_PORT, lfd, fd, one = 1;
	pthread_t t;

	(void)arg;
	sleep(delay ? atoi(delay) : START_DELAY_S);
	if (getenv("LOCALCAM_PORT"))
		port = atoi(getenv("LOCALCAM_PORT"));
	lfd = open_listener(port);
	if (lfd < 0) {
		port = FALLBACK_PORT;
		lfd = open_listener(port);
	}
	if (lfd < 0) {
		logmsg("cannot listen: %s\n", strerror(errno));
		return NULL;
	}
	logmsg("web UI on port %d, files from %s\n", port, www_dir);
	settings_load();
	upload_load();
	if (pthread_create(&t, NULL, settings_keeper, NULL) == 0)
		pthread_detach(t);
	if (pthread_create(&t, NULL, ptz_watchdog, NULL) == 0)
		pthread_detach(t);
	if (pthread_create(&t, NULL, rec_thread, NULL) == 0)
		pthread_detach(t);

	for (;;) {
		fd = accept(lfd, NULL, NULL);
		if (fd < 0) {
			if (errno != EINTR)
				usleep(100000);
			continue;
		}
		if (__sync_add_and_fetch(&active_clients, 1) > MAX_CLIENTS) {
			__sync_fetch_and_sub(&active_clients, 1);
			close(fd);
			continue;
		}
		setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, &one, sizeof(one));
		if (pthread_create(&t, NULL, client_thread, (void *)(intptr_t)fd) != 0) {
			__sync_fetch_and_sub(&active_clients, 1);
			close(fd);
			continue;
		}
		pthread_detach(t);
	}
	return NULL;
}

/* Runs when the library is loaded (linked with -Wl,-init,localcam_init). */
void localcam_init(void)
{
	char cmd[64] = "";
	pthread_t t;
	ssize_t n;
	int f;

	/* Only start the server inside anyka_ipc (or the test harness). */
	f = open("/proc/self/cmdline", O_RDONLY);
	if (f >= 0) {
		n = read(f, cmd, sizeof(cmd) - 1);
		cmd[n > 0 ? n : 0] = '\0';
		close(f);
	}
	if (!strstr(cmd, "anyka_ipc") && !getenv("LOCALCAM_FORCE"))
		return;
	if (getenv("LOCALCAM_WWW"))
		www_dir = getenv("LOCALCAM_WWW");
	if (getenv("LOCALCAM_SD"))
		sd_dir = getenv("LOCALCAM_SD");
	if (pthread_create(&t, NULL, server_thread, NULL) == 0)
		pthread_detach(t);
}

/* ---------- libYiP2P API used by anyka_ipc ---------- */

int yi_p2p_send_frame_data(uint32_t sid, yi_frame_info_t *info, void *buf, int len)
{
	struct session *s = session_find(sid);
	unsigned char hdr[FRAME_HDR_LEN];
	int queued;

	if (!s || !info || !buf || len <= 0 || !info->is_video)
		return 0;
	pthread_mutex_lock(&s->lock);
	if (s->sid != sid || s->state != S_ALIVE)
		goto out;
	/* A browser decoder can only start on a key frame (it carries SPS/PPS). */
	if (!s->got_key && !info->is_iframe)
		goto out;
	/* Slow link: if this frame would not fit under MAX_QUEUED, drop it and
	 * the rest until the next key frame, instead of blocking anyka_ipc's
	 * sending thread and letting the delay grow. An empty queue always
	 * takes the frame, so large key frames still get through. */
	queued = queued_bytes(s->fd);
	if (queued > 0 && queued + FRAME_HDR_LEN + len > s->limit) {
		s->got_key = 0;
		s->dropped++;
		goto out;
	}
	s->got_key = 1;
	put_be32(hdr, (uint32_t)len);
	put_be32(hdr + 4, info->ts);
	hdr[8] = info->is_iframe ? 1 : 0;
	if (send_all(s->fd, hdr, sizeof(hdr), MSG_MORE) < 0 ||
	    send_all(s->fd, buf, len, 0) < 0) {
		s->state = S_CLOSED;
		shutdown(s->fd, SHUT_RDWR);
	} else {
		s->frames++;
	}
out:
	pthread_mutex_unlock(&s->lock);
	return len;
}

int yi_p2p_is_alive(uint32_t sid)
{
	return session_alive(sid);
}

int yi_p2p_is_video_requested(uint32_t sid)
{
	return session_alive(sid);
}

int yi_p2p_is_audio_requested(uint32_t sid)
{
	(void)sid;
	return 0;
}

int yi_p2p_is_replay(uint32_t sid)
{
	(void)sid;
	return 0;
}

/* 0 = main stream (1280x720), 1 = sub stream (640x360). */
int yi_p2p_get_resolution(uint32_t sid)
{
	struct session *s = session_find(sid);

	return s && !s->hd ? 1 : 0;
}

/* anyka_ipc puts the frame payload at buf + this offset. */
int yi_p2p_get_frame_data_offset(void)
{
	return 0;
}

int yi_p2p_release_session(uint32_t sid)
{
	struct session *s = session_find(sid);

	if (s) {
		pthread_mutex_lock(&s->lock);
		if (s->sid == sid)
			s->state = S_RELEASED;
		pthread_mutex_unlock(&s->lock);
	}
	return 0;
}

/* worker_thread polls this every 10 ms; there are no app messages to read. */
int yi_p2p_process_msg(uint32_t sid)
{
	(void)sid;
	usleep(100000);
	return 0;
}

/* The cloud P2P stack is never started. */
int yi_p2p_init(void)                      { return -1; }
int yi_p2p_listen(void)                    { return -1; }
int yi_p2p_listen_break(void)              { return 0; }
int yi_p2p_deinit(void)                    { return 0; }
int yi_p2p_do_auth(void)                   { return -1; }
int yi_p2p_login_status_check(void)        { return 0; }
int yi_p2p_recv_audio_data(void)           { return 0; }
int yi_p2p_reply_alert_days(void)          { return 0; }
int yi_p2p_reply_alert_events(void)        { return 0; }
int yi_p2p_reply_ap_conf(void)             { return 0; }
int yi_p2p_reply_dev_info(void)            { return 0; }
int yi_p2p_reply_device_param_conf(void)   { return 0; }
int yi_p2p_reply_record_events(void)       { return 0; }
int yi_p2p_reply_record_events_day(void)   { return 0; }
int yi_p2p_reply_record_events_month(void) { return 0; }
int yi_p2p_reply_version(void)             { return 0; }
