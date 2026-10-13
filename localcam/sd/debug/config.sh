#!/bin/sh
# Runs at boot from /usr/sbin/service.sh when /mnt/debug exists, before
# daemon and anyka_ipc start. Nothing on the flash is changed: take out the
# SD card (or rename the debug folder) and the camera boots the original
# firmware again.
D=/mnt/debug
LOG=$D/localcam.log

# 1 = delete the default route so nothing on the camera can reach the
#     internet; the local network keeps working. 0 = leave routing alone.
BLOCK_INTERNET=1
# 1 = stop the open root FTP server that rc.local starts on port 21.
STOP_FTP=1

{
	echo "=== localcam boot $(date)"
	for f in libYiP2P.so liboss.so libcloudapi.so; do
		if [ -f $D/lib/$f ]; then
			mount -o bind $D/lib/$f /usr/lib/$f && echo "replaced /usr/lib/$f"
		fi
	done
	mount -o bind $D/cloudAPI /usr/bin/cloudAPI && echo "replaced /usr/bin/cloudAPI"
	if [ "$STOP_FTP" = 1 ]; then
		killall tcpsvd && echo "ftp stopped"
	fi
} > $LOG 2>&1

if [ "$BLOCK_INTERNET" = 1 ]; then
	# The wifi scripts add the default route back after every DHCP lease.
	( while true; do route del default 2>/dev/null; sleep 5; done ) </dev/null >/dev/null 2>&1 &
fi
exit 0
