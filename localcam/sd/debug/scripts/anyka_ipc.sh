#!/bin/sh
# Stand-in for /usr/sbin/anyka_ipc.sh: the same start/stop/restart, except
# that anyka_ipc's console output can be discarded (QUIET in config.sh), each
# run's end is logged to debug/localcam.log (exit status 128+N = killed by
# signal N), and after MAX_RUNS quick deaths in a row it is not started again,
# so a broken setup cannot keep the camera cycling.
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
T=/tmp/localcam
LOG=/mnt/debug/localcam.log
MAX_RUNS=4
OUT=$(cat $T/anyka_out 2>/dev/null)

say()
{
	echo "[localcam] $(date +%T) $*" > /dev/console
	echo "$(date +%T) $*" >> $LOG 2>/dev/null
}

start()
{
	[ -z "$(pgrep anyka_ipc)" ] || return
	n=$(cat $T/anyka_runs 2>/dev/null)
	n=$((${n:-0} + 1))
	echo $n > $T/anyka_runs
	if [ $n -gt $MAX_RUNS ]; then
		[ $n -eq $((MAX_RUNS + 1)) ] && say "anyka_ipc ended $MAX_RUNS times in a row, not starting it again"
		return
	fi
	source /etc/jffs2/time_zone.sh
	cd /
	(
		started=$(cut -d. -f1 /proc/uptime)
		if [ "$OUT" = /dev/null ]; then
			anyka_ipc > /dev/null 2>&1 &
		else
			anyka_ipc &
		fi
		pid=$!
		say "anyka_ipc started (run $n, pid $pid)"
		wait $pid
		st=$?
		lived=$(($(cut -d. -f1 /proc/uptime) - started))
		say "anyka_ipc ended after $lived s, exit status $st"
		# A run that lasted 10 minutes was not a startup failure.
		[ $lived -gt 600 ] && echo 0 > $T/anyka_runs
		if ls $T/ps.* > /dev/null 2>&1; then
			{
				echo "=== run $n, pid $pid, status $st, uptime $(cat /proc/uptime)"
				cat $T/ps.*
				echo "--- dmesg"
				dmesg
			} >> /mnt/debug/anyka_exit.log 2>&1
		fi
	) < /dev/null &
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
