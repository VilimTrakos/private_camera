#!/bin/sh
# Runs at boot from /usr/sbin/service.sh when /mnt/debug exists, before
# daemon and anyka_ipc start. Nothing on the flash is changed: take out the
# SD card (or rename the debug folder) and the camera boots the original
# firmware again.
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
D=/mnt/debug
T=/tmp/localcam
LOG=$D/localcam.log

# 1 = anyka_ipc's console output is discarded (no log spam on the serial
#     console); 0 = keep it, for debugging.
QUIET=0
# 1 = stop the FTP server that rc.local starts on port 21 (root, no password).
STOP_FTP=0
# 1 = keep deleting the default route, so nothing can reach the internet even
#     if something adds one.
BLOCK_INTERNET=1

mkdir -p $T
{
	echo "=== localcam boot $(date)"

	# Yi cloud: P2P becomes the local web server, upload/update/report fail.
	for f in libYiP2P.so liboss.so libcloudapi.so; do
		mount -o bind $D/lib/$f /usr/lib/$f && echo "replaced /usr/lib/$f"
	done
	mount -o bind $D/cloudAPI /usr/bin/cloudAPI && echo "replaced /usr/bin/cloudAPI"

	# anyka_ipc must not touch Wi-Fi: it keeps searching for its saved
	# network and restarts the radio every two minutes, which would tear
	# down our access point. Firmware updates go the same way.
	for f in wifi_manage.sh wifi_station.sh wifi_driver.sh wifi_run.sh \
		 eth_manage.sh ap.sh wifi_ap.sh update.sh; do
		mount -o bind $D/scripts/noop.sh /usr/sbin/$f && echo "disabled /usr/sbin/$f"
	done

	if [ "$QUIET" = 1 ]; then
		echo /dev/null > $T/anyka_out
	else
		echo console > $T/anyka_out
	fi
	mount -o bind $D/scripts/anyka_ipc.sh /usr/sbin/anyka_ipc.sh && echo "replaced /usr/sbin/anyka_ipc.sh"

	if [ "$STOP_FTP" = 1 ]; then
		killall tcpsvd && echo "ftp stopped"
	fi
} > $LOG 2>&1

# The radio needs ~10 s to come up; do not hold up the boot for it.
sh $D/scripts/ap_start.sh >> $LOG 2>&1 < /dev/null &

if [ "$BLOCK_INTERNET" = 1 ]; then
	( while true; do route del default 2>/dev/null; sleep 5; done ) < /dev/null > /dev/null 2>&1 &
fi
exit 0
