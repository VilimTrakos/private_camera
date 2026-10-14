#!/bin/sh
# Copied by config.sh to /tmp/localcam/bin/fuser, umount and mount; that
# directory is first in anyka_ipc's PATH only (scripts/anyka_ipc.sh).
#
# When recording starts, anyka_ipc's fuser_remount() runs
#   fuser -m -k /mnt; umount -lf /mnt; mount -t vfat -o rw DEV /mnt
# which kills every process with a file open on the card and cannot mount an
# exFAT card again. While the card is mounted these three calls do nothing;
# everything else goes to busybox unchanged.
name=${0##*/}
mounted() { grep -q " /mnt " /proc/mounts; }

case "$name $*" in
"fuser -m -k /mnt" | "umount -lf /mnt")
	mounted && exit 0
	;;
"mount -t vfat -o rw "*" /mnt")
	mounted && exit 0
	shift 2	# let mount detect the file system, exFAT included
	;;
esac
exec /bin/busybox $name "$@"
