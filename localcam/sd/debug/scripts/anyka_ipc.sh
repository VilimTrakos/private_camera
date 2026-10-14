#!/bin/sh
# Stand-in for /usr/sbin/anyka_ipc.sh: the same start/stop/restart, except
# that anyka_ipc's console output can be discarded (QUIET in config.sh).
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
OUT=$(cat /tmp/localcam/anyka_out 2>/dev/null)

start()
{
	if [ -z "$(pgrep anyka_ipc)" ]; then
		source /etc/jffs2/time_zone.sh
		if [ "$OUT" = /dev/null ]; then
			anyka_ipc > /dev/null 2>&1 &
		else
			anyka_ipc &
		fi
	fi
}

stop()
{
	killall -15 anyka_ipc
}

case "$1" in
	start)
		start
		;;
	stop)
		stop
		;;
	restart)
		stop
		start
		;;
	*)
		echo "Usage: $0 start|stop|restart"
		exit 3
		;;
esac
exit 0
