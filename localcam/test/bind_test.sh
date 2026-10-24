#!/bin/sh
# Tests lib/libbindguard.so (CLOSE_PORTS in config.sh) under qemu with the
# camera's own uClibc (../rootfs), each time in a container with no network:
# first test/bind_probe.so, then the camera's own daemon, whose factory test
# (TCP 6789) and discovery (UDP 8192) must listen on 127.0.0.1 only. Run
# ../build.sh first.
HERE=$(cd "$(dirname "$0")/.." && pwd)
ROOTFS=$(cd "$HERE/../rootfs" && pwd)
LIB=/work/sd/debug/lib/libbindguard.so
fail=0

run() {
	docker run --rm --network none -u "$(id -u):$(id -g)" \
		-v "$HERE":/work:ro -v "$ROOTFS":/sysroot:ro localcam-build "$@"
}
result() {
	if [ "$1" = 0 ]; then
		echo "ok   $2"
	else
		echo "FAIL $2"
		fail=1
	fi
}
# a whole line of $out matches the pattern
check() {
	echo "$out" | grep -qx "$1"
	result $? "$2"
}

out=$(run qemu-arm -L /sysroot -E LD_PRELOAD="$LIB /work/test/build/bind_probe.so" /sysroot/bin/busybox true)
for p in "tcp 6789" "tcp 6790" "udp 8192" "tcp 8000" "tcp 8012"; do
	check "${p% *} 0.0.0.0:${p#* } -> 127.0.0.1:${p#* }" "$p on 0.0.0.0 becomes 127.0.0.1"
done
check "tcp 0.0.0.0:18080 -> 0.0.0.0:18080" "other TCP ports stay on 0.0.0.0"
check "udp 0.0.0.0:18192 -> 0.0.0.0:18192" "other UDP ports stay on 0.0.0.0"
check "tcp 127.0.0.2:8001 -> 127.0.0.2:8001" "an explicit address is kept"
check "tcp 0.0.0.0:0 -> 0.0.0.0:[0-9]*" "port 0 (any free port) is kept"

# daemon stops when the reset button's input device is missing, so a FIFO
# stands in for /dev/input/event0 in a copy of the rootfs.
out=$(run sh -c "
	cp -a /sysroot /tmp/sr 2>/dev/null
	mkdir -p /tmp/sr/dev/input && mkfifo /tmp/sr/dev/input/event0
	sleep 40 > /tmp/sr/dev/input/event0 &
	qemu-arm -L /tmp/sr -E LD_PRELOAD=$LIB /tmp/sr/usr/bin/daemon > /dev/null 2>&1 &
	i=0
	while [ \$i -lt 30 ] && ! grep -q ':2000 ' /proc/net/udp; do sleep 1; i=\$((i + 1)); done
	sleep 1
	awk 'NR > 1 && \$4 == \"0A\" {print \"tcp\", \$2}' /proc/net/tcp
	awk 'NR > 1 {print \"udp\", \$2}' /proc/net/udp")
check "tcp 0100007F:1A85" "daemon: factory test TCP 6789 on 127.0.0.1"
check "udp 0100007F:2000" "daemon: discovery UDP 8192 on 127.0.0.1"
others=$(echo "$out" | grep -v '^tcp 0100007F:\|^udp 0100007F:')
[ -z "$others" ]
result $? "daemon: nothing listens on another address ($(echo $out))"

[ $fail = 0 ] && echo "bindguard: ALL PASSED" || echo "bindguard: FAILED"
exit $fail
