#!/bin/sh
# Stand-in for /usr/sbin/anyka_ipc.sh: the same start/stop/restart, except
# that anyka_ipc's console output can be discarded (QUIET in config.sh).
#
# Debugging aids while anyka_ipc keeps dying (daemon restarts it each time):
# - each run's exit status goes to the console and debug/localcam.log
#   (128+N = killed by signal N: 134 abort, 137 kill, 139 segfault, 141 pipe);
# - from run CLOUDAPI_RUN on, the original /usr/bin/cloudAPI is used again, to
#   tell whether our stub is what makes it die (no gateway, so nothing leaves);
# - after MAX_RUNS runs it is not started again, so the camera stops cycling.
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
T=/tmp/localcam
LOG=/mnt/debug/localcam.log
MAX_RUNS=4
CLOUDAPI_RUN=3
OUT=$(cat $T/anyka_out 2>/dev/null)

say()
{
	echo "[localcam] $(date +%T) $*" > /dev/console
	echo "$(date +%T) $*" >> $LOG
}

start()
{
	[ -z "$(pgrep anyka_ipc)" ] || return
	n=$(cat $T/anyka_runs 2>/dev/null)
	n=$((${n:-0} + 1))
	echo $n > $T/anyka_runs
	if [ $n -gt $MAX_RUNS ]; then
		[ $n -eq $((MAX_RUNS + 1)) ] && say "anyka_ipc ended $MAX_RUNS times, not starting it again"
		return
	fi
	if [ $n -eq $CLOUDAPI_RUN ] && umount /usr/bin/cloudAPI 2>/dev/null; then
		say "run $n: using the original /usr/bin/cloudAPI"
	fi
	source /etc/jffs2/time_zone.sh
	say "starting anyka_ipc, run $n"
	(
		if [ "$OUT" = /dev/null ]; then
			anyka_ipc > /dev/null 2>&1 &
		else
			anyka_ipc &
		fi
		pid=$!
		say "anyka_ipc run $n has pid $pid"
		wait $pid
		st=$?
		say "anyka_ipc run $n ended, exit status $st"
		{
			echo "=== run $n, pid $pid, status $st, $(date +%T), uptime $(cat /proc/uptime)"
			free
			echo "--- process lists before the end (sort by the @ uptime lines)"
			cat $T/ps.* 2>/dev/null
			echo "--- dmesg"
			dmesg
		} >> /mnt/debug/anyka_exit.log 2>&1
	) &
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
