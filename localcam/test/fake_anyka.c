/*
 * Test stand-in for anyka_ipc: exports yi_p2p_on_new_session() and, like the
 * real worker_thread/stream_send_thread (decompiled from anyka_ipc), polls
 * yi_p2p_is_alive()/yi_p2p_is_video_requested() and pushes frames through
 * yi_p2p_send_frame_data() until the session dies, then releases it.
 *
 * Frames are synthetic: an Annex-B start code, a NAL header (0x65 key frame,
 * 0x41 P frame), then a counter so the client can check order and integrity.
 * Every 15th frame is a key frame and the stream starts mid-GOP, so the
 * library must drop the leading P frames.
 */
#include <fcntl.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

typedef struct {
	time_t sec;
	uint32_t ts;
	uint16_t width, height;
	uint8_t is_live, is_video, is_iframe, is_h265, ptz_stat, in_loss, out_loss;
} yi_frame_info_t;

int yi_p2p_is_alive(uint32_t sid);
int yi_p2p_is_video_requested(uint32_t sid);
int yi_p2p_is_audio_requested(uint32_t sid);
int yi_p2p_is_replay(uint32_t sid);
int yi_p2p_get_resolution(uint32_t sid);
int yi_p2p_get_frame_data_offset(void);
int yi_p2p_send_frame_data(uint32_t sid, yi_frame_info_t *info, void *buf, int len);
int yi_p2p_release_session(uint32_t sid);
int yi_p2p_process_msg(uint32_t sid);

static void *worker_thread(void *arg)
{
	uint32_t sid = (uint32_t)(uintptr_t)arg;

	while (yi_p2p_is_alive(sid) == 1) {
		yi_p2p_process_msg(sid);
		usleep(10000);
	}
	yi_p2p_release_session(sid);
	return NULL;
}

static void *stream_send_thread(void *arg)
{
	uint32_t sid = (uint32_t)(uintptr_t)arg;
	uint32_t n = 5;		/* start mid-GOP */
	int offset = yi_p2p_get_frame_data_offset();

	while (yi_p2p_is_alive(sid) == 1) {
		if (yi_p2p_is_replay(sid) == 1 || !yi_p2p_is_video_requested(sid)) {
			usleep(10000);
			continue;
		}
		int key = (n % 15) == 0;
		/* main stream frames are bigger than sub stream ones */
		int len = (yi_p2p_get_resolution(sid) == 0 ? 20000 : 4000) + (n % 7) * 100;
		unsigned char *buf = malloc(offset + len);
		unsigned char *p = buf + offset;
		yi_frame_info_t info;
		int i;

		p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 1;
		p[4] = key ? 0x65 : 0x41;
		p[5] = n >> 24; p[6] = n >> 16; p[7] = n >> 8; p[8] = n;
		for (i = 9; i < len; i++)
			p[i] = (unsigned char)(n + i);
		memset(&info, 0, sizeof(info));
		info.ts = n * 66;
		info.is_live = info.is_video = 1;
		info.is_iframe = key;
		yi_p2p_send_frame_data(sid, &info, buf, len);
		/* an audio frame must be ignored */
		info.is_video = 0;
		yi_p2p_send_frame_data(sid, &info, buf, 64);
		free(buf);
		n++;
		usleep(66000);
	}
	return NULL;
}

/* Image orientation, exported by the real anyka_ipc (ISP flip/mirror). */
static int cur_flip, cur_mirror;

int ak_vi_set_flip_mirror(int handle, int flip, int mirror)
{
	if (!handle)
		return -1;
	cur_flip = flip;
	cur_mirror = mirror;
	return 0;
}

int ak_vi_get_flip_mirror(int handle, int *flip, int *mirror)
{
	if (!handle)
		return -1;
	*flip = cur_flip;
	*mirror = cur_mirror;
	return 0;
}

/* Night vision mode (anyka_ipc's photosensitive switch): 0 night, 1 day, 2 auto. */
int ak_misc_photosensitive_set_status_ex(int mode)
{
	return mode >= 0 && mode <= 2 ? 0 : -1;
}

/* Pan/tilt, as called by the Yi app. */
int yi_p2p_on_ptz_direction_ctrl(int direction, uint32_t speed)
{
	(void)speed;
	return direction >= 1 && direction <= 4 ? 0 : -1;
}

int yi_p2p_on_ptz_direction_ctrl_stop(void)
{
	return 0;
}

/* Recording: 0 off, 1 all the time, 2 on motion. The last mode goes to
 * $LOCALCAM_SD/fake_record_mode, so the test can see what was asked. */
int AkSetRecordMode(int mode)
{
	char path[200], c = '0' + mode;
	const char *sd = getenv("LOCALCAM_SD");
	int f;

	if (!sd || mode < 0 || mode > 2)
		return -1;
	snprintf(path, sizeof(path), "%s/fake_record_mode", sd);
	f = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f >= 0) {
		write(f, &c, 1);
		close(f);
	}
	return 0;
}

int yi_p2p_on_new_session(uint32_t sid)
{
	pthread_t t;

	if (pthread_create(&t, NULL, worker_thread, (void *)(uintptr_t)sid))
		return -1;
	pthread_detach(t);
	if (pthread_create(&t, NULL, stream_send_thread, (void *)(uintptr_t)sid))
		return -1;
	pthread_detach(t);
	return 0;
}
