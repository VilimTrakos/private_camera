#!/bin/sh
# Runs at boot from /usr/sbin/service.sh when /mnt/debug exists, before
# daemon and anyka_ipc start. Nothing on the flash is changed: take out the
# SD card (or rename the debug folder) and the camera boots the original
# firmware again.
#
# Everything runs from a copy in RAM (/tmp/localcam), not from the card: when
# recording starts, anyka_ipc runs "fuser -m -k /mnt" (fuser_remount), which
# kills every process with a file open on the card - anyka_ipc included, if
# its libraries came from there.
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
D=/mnt/debug
T=/tmp/localcam
LOG=$D/localcam.log

# 1 = anyka_ipc's console output is discarded (no log spam on the serial
#     console); 0 = keep it, for debugging.
QUIET=1
# 1 = stop the FTP server that rc.local starts on port 21. 0 = keep it, but
#     root then needs the password whose hash is FTP_PASSWORD_HASH in
#     wifi.conf; without a valid hash it is stopped as well (out of the box
#     it takes any password).
STOP_FTP=0
# 1 = daemon's factory test and discovery (TCP 6789, 6790, UDP 8192) and
#     anyka_ipc's tuning tools (TCP 8000, 8012) listen only on 127.0.0.1, not
#     on the network (lib/libbindguard.so, scripts/daemon.sh).
CLOSE_PORTS=1
# 1 = keep deleting the default route, so nothing can reach the internet even
#     if something adds one.
BLOCK_INTERNET=1
# 1 = debugging: keep the last ~5 s of process lists, saved to
#     debug/anyka_exit.log if anyka_ipc ends unexpectedly.
DIAG=0

cd /
mkdir -p $T
{
	echo "=== localcam boot $(date)"
	cp -r $D/lib $D/scripts $D/www $D/cloudAPI $T/ && echo "copied to $T"
	# fuser/umount/mount guards for anyka_ipc's SD remount (scripts/sdguard.sh)
	mkdir -p $T/bin
	for n in fuser umount mount; do
		cp $T/scripts/sdguard.sh $T/bin/$n
	done
	chmod 755 $T/cloudAPI $T/scripts/*.sh $T/bin/*

	# Yi cloud: P2P becomes the local web server, upload/update/report fail.
	for f in libYiP2P.so liboss.so libcloudapi.so; do
		mount -o bind $T/lib/$f /usr/lib/$f && echo "replaced /usr/lib/$f"
	done
	mount -o bind $T/cloudAPI /usr/bin/cloudAPI && echo "replaced /usr/bin/cloudAPI"

	# anyka_ipc must not touch Wi-Fi: it keeps searching for its saved
	# network and restarts the radio every two minutes, which would tear
	# down our access point. Firmware updates go the same way.
	for f in wifi_manage.sh wifi_station.sh wifi_driver.sh wifi_run.sh \
		 eth_manage.sh ap.sh wifi_ap.sh update.sh; do
		mount -o bind $T/scripts/noop.sh /usr/sbin/$f && echo "disabled /usr/sbin/$f"
	done

	if [ "$QUIET" = 1 ]; then
		echo /dev/null > $T/anyka_out
	else
		echo console > $T/anyka_out
	fi
	mount -o bind $T/scripts/anyka_ipc.sh /usr/sbin/anyka_ipc.sh && echo "replaced /usr/sbin/anyka_ipc.sh"

	# No DNS: on home Wi-Fi the router would otherwise forward name lookups
	# to the internet. (/etc/resolv.conf links here; nothing goes to flash.)
	: > $T/resolv.conf
	mount -o bind $T/resolv.conf /etc/jffs2/resolv.conf && echo "emptied /etc/resolv.conf"

	# rc.local's ftpd checks root against /etc/passwd (-> /etc/jffs2/passwd),
	# where the password field is empty, so any password works. A copy in RAM
	# with the hash goes over it; the flash is not changed. busybox reads
	# /etc/shadow only when the field is "x", so the hash goes in passwd.
	FTP_HASH=$(sed -n 's/^FTP_PASSWORD_HASH=//p' $D/wifi.conf | sed "s/$(printf '\r')\$//" | head -n 1)
	case "$FTP_HASH" in
	*[!./0-9A-Za-z\$]*) FTP_HASH= ;;	# also keeps ":" out of passwd
	'$1$'?*'$'?*) ;;			# MD5-crypt, the only kind uClibc has
	*) FTP_HASH= ;;
	esac
	if [ "$STOP_FTP" != 1 ] && [ -n "$FTP_HASH" ] &&
	   sed "s|^root:[^:]*:|root:$FTP_HASH:|" /etc/jffs2/passwd > $T/passwd &&
	   grep -qF "root:$FTP_HASH:" $T/passwd &&
	   mount -o bind $T/passwd /etc/jffs2/passwd; then
		echo "ftp: root needs the password (FTP_PASSWORD_HASH)"
	else
		[ "$STOP_FTP" = 1 ] || echo "ftp: no valid FTP_PASSWORD_HASH in wifi.conf"
		killall tcpsvd && echo "ftp stopped"
	fi

	# service.sh starts daemon right after this script, through the stand-in;
	# anyka_ipc.sh preloads the same library when $T/preload names it. Only
	# if the library is there: uClibc will not start a program whose
	# LD_PRELOAD library is missing.
	if [ "$CLOSE_PORTS" = 1 ]; then
		mkdir -p $T/orig
		if [ -f $T/lib/libbindguard.so ] && cp /usr/bin/daemon $T/orig/daemon &&
		   mount -o bind $T/scripts/daemon.sh /usr/bin/daemon; then
			echo $T/lib/libbindguard.so > $T/preload
			echo "daemon and anyka_ipc: test ports on 127.0.0.1 only"
		else
			echo "CLOSE_PORTS: lib/libbindguard.so missing or daemon not replaced, test ports stay open"
		fi
	fi
} > $LOG 2>&1

# Background jobs run as their own scripts from RAM with no file on the card
# open. Wi-Fi needs 10-60 s to come up; do not hold up the boot for it.
sh -c "sh $T/scripts/net_start.sh > $T/net.log 2>&1; cat $T/net.log >> $LOG" < /dev/null > /dev/null 2>&1 &
sh $T/scripts/watch.sh $BLOCK_INTERNET < /dev/null > /dev/null 2>&1 &
if [ "$DIAG" = 1 ]; then
	sh $T/scripts/ps_sampler.sh < /dev/null > /dev/null 2>&1 &
fi
exit 0
