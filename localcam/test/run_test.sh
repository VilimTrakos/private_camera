#!/bin/sh
# Runs the ARM build of libYiP2P.so under qemu with the camera's own uClibc
# (../rootfs), preloaded into busybox together with fake_anyka.so, then tests
# it over HTTP from the host with client.py. Run ../build.sh first.
#
# A temporary folder stands in for the SD card (record/ with made-up
# recordings, debug/ for the settings); client.py also runs a small FTP
# server for the upload.
set -e
HERE=$(cd "$(dirname "$0")/.." && pwd)
ROOTFS=$(cd "$HERE/../rootfs" && pwd)
PORT=18080
SD=$(mktemp -d)
trap 'rm -rf "$SD"' EXIT

python3 -I "$HERE/test/client.py" --setup "$SD"
docker rm -f localcam-test >/dev/null 2>&1 || true
docker run -d --name localcam-test --network host -u "$(id -u):$(id -g)" \
	-v "$HERE":/work:ro -v "$ROOTFS":/sysroot:ro -v "$SD":/sd localcam-build \
	qemu-arm -L /sysroot \
		-E LOCALCAM_FORCE=1 -E LOCALCAM_DELAY=1 -E LOCALCAM_PORT=$PORT \
		-E LOCALCAM_WWW=/work/sd/debug/www -E LOCALCAM_SD=/sd -E LOCALCAM_UPLOAD_EVERY=1 \
		-E LD_PRELOAD="/work/test/build/fake_anyka.so /work/sd/debug/lib/libYiP2P.so" \
		/sysroot/bin/busybox sleep 300 >/dev/null

sleep 4
status=0
python3 -I "$HERE/test/client.py" 127.0.0.1 $PORT "$SD" || status=$?
echo "--- library log (stderr of the ARM process)"
docker logs localcam-test 2>&1 | tail -30
docker rm -f localcam-test >/dev/null
exit $status
