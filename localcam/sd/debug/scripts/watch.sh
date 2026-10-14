#!/bin/sh
# Background housekeeping, started by config.sh from /tmp/localcam (it keeps
# nothing open on the SD card, see config.sh). Usage: watch.sh BLOCK_INTERNET
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
BLOCK_INTERNET=$1
cd /

while true; do
	# Nothing should add a default route or DNS servers (scripts/udhcpc.sh
	# ignores them), but if something does, take them away again.
	if [ "$BLOCK_INTERNET" = 1 ]; then
		route del default 2>/dev/null
		[ -s /etc/jffs2/resolv.conf ] && : > /etc/jffs2/resolv.conf
	fi
	# At startup anyka_ipc remounts the card with "mount -t vfat", which
	# fails for exFAT cards and leaves it unmounted. Mount it again.
	if ! grep -q " /mnt " /proc/mounts; then
		for dev in /dev/mmcblk0p1 /dev/mmcblk0; do
			if [ -e $dev ] && mount -rw $dev /mnt 2>/dev/null; then
				echo "[localcam] $(date +%T) SD card mounted again ($dev)" > /dev/console
				break
			fi
		done
	fi
	sleep 5
done
