#!/bin/sh
# Runs the ARM build of libYiP2P.so under qemu with the camera's own uClibc
# (../rootfs), preloaded into busybox together with fake_anyka.so, then tests
# it over HTTP from the host with client.py. Run ../build.sh first.
set -e
HERE=$(cd "$(dirname "$0")/.." && pwd)
ROOTFS=$(cd "$HERE/../rootfs" && pwd)
PORT=18080

docker rm -f localcam-test >/dev/null 2>&1 || true
docker run -d --name localcam-test --network host \
	-v "$HERE":/work:ro -v "$ROOTFS":/sysroot:ro localcam-build \
	qemu-arm -L /sysroot \
		-E LOCALCAM_FORCE=1 -E LOCALCAM_DELAY=1 -E LOCALCAM_PORT=$PORT \
		-E LOCALCAM_WWW=/work/sd/debug/www \
		-E LD_PRELOAD="/work/test/build/fake_anyka.so /work/sd/debug/lib/libYiP2P.so" \
		/sysroot/bin/busybox sleep 300 >/dev/null

sleep 4
status=0
python3 -I "$HERE/test/client.py" 127.0.0.1 $PORT || status=$?
echo "--- library log (stderr of the ARM process)"
docker logs localcam-test 2>&1 | tail -20
docker rm -f localcam-test >/dev/null
exit $status
