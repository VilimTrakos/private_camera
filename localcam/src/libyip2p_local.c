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
 *   GET /status      read-only diagnostics: routes, DNS, Wi-Fi link, mounts, viewers
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
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

#define DEFAULT_WWW      "/tmp/localcam/www"	/* copied from the SD card by config.sh */
#define DEFAULT_PORT     80
#define FALLBACK_PORT    8080
#define START_DELAY_S    20      /* let anyka_ipc start its encoder first */
#define MAX_SESSIONS     3
#define MAX_CLIENTS      16
#define RELEASE_WAIT_S   15
#define FRAME_HDR_LEN    9
#define STREAM_SNDBUF    (256 * 1024)
#define MAX_QUEUED       (256 * 1024)	/* a few HD key frames; ~1-2 s on a slow link */
#define IMAGE_CONF       "/mnt/debug/image.conf"
#define VI_HANDLE        100		/* what anyka_ipc itself passes */

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

static void send_status(int fd, const char *status, const char *body)
{
	char hdr[256];

	snprintf(hdr, sizeof(hdr),
		 "HTTP/1.1 %s\r\nContent-Type: text/plain\r\n"
		 "Content-Length: %u\r\nConnection: close\r\n\r\n",
		 status, (unsigned)strlen(body));
	if (send_str(fd, hdr) == 0)
		send_str(fd, body);
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

/* ---------- image orientation ---------- */

static int image_flip = -1, image_mirror = -1;	/* -1: leave as anyka_ipc set it */

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

/* anyka_ipc sets both from its own config at startup; re-apply ours after it. */
static void image_load(void)
{
	char buf[64] = "";
	char *p;
	ssize_t n;
	int f;

	f = open(IMAGE_CONF, O_RDONLY);
	if (f < 0)
		return;
	n = read(f, buf, sizeof(buf) - 1);
	close(f);
	buf[n > 0 ? n : 0] = '\0';
	if ((p = strstr(buf, "FLIP=")))
		image_flip = atoi(p + 5) ? 1 : 0;
	if ((p = strstr(buf, "MIRROR=")))
		image_mirror = atoi(p + 7) ? 1 : 0;
	image_apply();
	logmsg("image: flip %d, mirror %d (from %s)\n", image_flip, image_mirror, IMAGE_CONF);
}

/* Keep our orientation in case anyka_ipc resets it (it does at startup). */
static void *image_keeper(void *arg)
{
	(void)arg;
	for (;;) {
		sleep(60);
		image_apply();
	}
	return NULL;
}

static void image_save(void)
{
	char buf[64];
	int f;

	f = open(IMAGE_CONF, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f < 0)
		return;
	snprintf(buf, sizeof(buf), "FLIP=%d\nMIRROR=%d\n", image_flip > 0, image_mirror > 0);
	write(f, buf, strlen(buf));
	close(f);
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
		image_save();
		logmsg("image: flip %d, mirror %d (set from browser)\n", image_flip, image_mirror);
	}
	ak_vi_get_flip_mirror(VI_HANDLE, &flip, &mirror);
	snprintf(body, sizeof(body), "{\"flip\":%d,\"mirror\":%d}\n", flip ? 1 : 0, mirror ? 1 : 0);
	send_status(fd, "200 OK", body);
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

static void *client_thread(void *arg)
{
	int fd = (int)(intptr_t)arg;
	char req[2048];
	size_t len = 0;
	char *path, *query, *end;

	set_timeout(fd, SO_RCVTIMEO, 10);
	set_timeout(fd, SO_SNDTIMEO, 5);
	while (len < sizeof(req) - 1) {
		ssize_t r = recv(fd, req + len, sizeof(req) - 1 - len, 0);
		if (r <= 0)
			goto out;
		len += r;
		req[len] = '\0';
		if (strstr(req, "\r\n\r\n"))
			break;
	}
	if (strncmp(req, "GET ", 4) != 0) {
		send_status(fd, "405 Method Not Allowed", "GET only\n");
		goto out;
	}
	path = req + 4;
	end = strchr(path, ' ');
	if (!end)
		goto out;
	*end = '\0';
	query = strchr(path, '?');
	if (query)
		*query++ = '\0';

	if (!strcmp(path, "/") || !strcmp(path, "/index.html"))
		serve_file(fd, "index.html");
	else if (!strcmp(path, "/stream"))
		handle_stream(fd, query);
	else if (!strcmp(path, "/status"))
		handle_status(fd);
	else if (!strcmp(path, "/image"))
		handle_image(fd, query);
	else if (!strcmp(path, "/time"))
		handle_time(fd, query);
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
	image_load();
	if (pthread_create(&t, NULL, image_keeper, NULL) == 0)
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
