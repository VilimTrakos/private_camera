/*
 * Offline stand-ins for /usr/lib/liboss.so (cloud upload of clips and
 * pictures) and /usr/lib/libcloudapi.so (firmware update, AP pairing, status
 * reports). Each exports exactly the functions anyka_ipc imports from the
 * original. Every call fails, so anyka_ipc gives up on the cloud.
 *
 * Built twice by build.sh: -DSTUB_OSS for liboss.so, -DSTUB_CLOUDAPI for
 * libcloudapi.so. All callers in anyka_ipc only test the int result, and ARM
 * EABI lets a callee ignore arguments, so a `(void)` signature is enough.
 */
#include <stddef.h>
#include <string.h>

#define FAIL(name) int name(void) { return -1; }

/* Both originals export memset_s and anyka_ipc uses it, so keep it working. */
int memset_s(void *dest, size_t destmax, int c, size_t count)
{
	if (!dest)
		return 22;	/* EINVAL */
	if (count > destmax) {
		memset(dest, c, destmax);
		return 34;	/* ERANGE */
	}
	memset(dest, c, count);
	return 0;
}

#ifdef STUB_OSS
FAIL(yi_get_token)
FAIL(yi_oss_cleanup)
FAIL(yi_oss_close_file)
FAIL(yi_oss_cloud_init)
FAIL(yi_oss_cloud_uninit)
FAIL(yi_oss_force_upload_file)
FAIL(yi_oss_media_write_pic)
FAIL(yi_oss_open_file)
FAIL(yi_oss_packet_media)
FAIL(yi_oss_prepare)
FAIL(yi_oss_prepare_by_time)
FAIL(yi_oss_set_cipher_callback)
FAIL(yi_oss_set_platform)
FAIL(yi_oss_upload_file)
FAIL(yi_oss_write_m3u8)
#endif

#ifdef STUB_CLOUDAPI
FAIL(yi_ap_listen_start)
FAIL(yi_ap_listen_stop)
FAIL(yi_cloud_crypt_file)
FAIL(yi_download_file)
FAIL(yi_get_update_info)
FAIL(yi_make_ap_p2p_id)
FAIL(yi_make_ap_ssid)
FAIL(yi_report_tnp_status)
#endif
