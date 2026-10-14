#!/bin/sh
# Debugging (DIAG=1 in config.sh): keep the last ~5 s of process lists in
# /tmp/localcam/ps.N, so scripts/anyka_ipc.sh can save them when anyka_ipc
# ends unexpectedly.
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
T=/tmp/localcam
cd /
i=0
while true; do
	{ echo "@ $(cat /proc/uptime)"; ps -o pid,ppid,args; } > $T/ps.$i 2>&1
	i=$(((i + 1) % 25))
	usleep 200000
done
