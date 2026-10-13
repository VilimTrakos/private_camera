#!/bin/sh
# Builds the three replacement libraries into sd/debug/lib/ inside the
# localcam-build Docker image (see Dockerfile: Debian armel gcc + qemu).
#
# The camera runs uClibc 0.9.33, not glibc, so the libraries are linked
# straight against the camera's own libc.so.0/libpthread.so.0 from ../rootfs
# (-nostdlib) and checked afterwards: every undefined symbol must exist in the
# camera's libraries, or the dynamic linker would refuse to load anyka_ipc.
set -e
HERE=$(cd "$(dirname "$0")" && pwd)

if [ ! -f /.dockerenv ]; then
	ROOTFS=$(cd "$HERE/../rootfs" && pwd)
	docker image inspect localcam-build >/dev/null 2>&1 ||
		docker build -q -t localcam-build "$HERE" >/dev/null
	exec docker run --rm -u "$(id -u):$(id -g)" -v "$HERE":/work -v "$ROOTFS":/sysroot:ro -w /work \
		localcam-build sh /work/build.sh
fi

CC=arm-linux-gnueabi-gcc
CFLAGS="-march=armv5te -mtune=arm926ej-s -marm -mfloat-abi=soft -Os -fPIC -Wall -Wextra \
	-fno-stack-protector -U_FORTIFY_SOURCE -D_FORTIFY_SOURCE=0 -fno-asynchronous-unwind-tables"
LDFLAGS="-shared -nostdlib -Wl,--hash-style=sysv -Wl,-z,noexecstack -Wl,-rpath-link,/sysroot/lib"
LIBS="/sysroot/lib/libc.so.0 /sysroot/lib/libpthread.so.0 -lgcc"
OUT=sd/debug/lib
mkdir -p $OUT test/build

$CC $CFLAGS $LDFLAGS -Wl,-soname,libYiP2P.so -Wl,-init,localcam_init \
	-o $OUT/libYiP2P.so src/libyip2p_local.c $LIBS
$CC $CFLAGS $LDFLAGS -Wl,-soname,liboss.so -DSTUB_OSS \
	-o $OUT/liboss.so src/cloud_stubs.c $LIBS
$CC $CFLAGS $LDFLAGS -Wl,-soname,libcloudapi.so -DSTUB_CLOUDAPI \
	-o $OUT/libcloudapi.so src/cloud_stubs.c $LIBS
# Test-only stand-in for anyka_ipc (see test/run_test.sh).
$CC $CFLAGS $LDFLAGS -o test/build/fake_anyka.so test/fake_anyka.c $LIBS

# Undefined symbols must be provided by the camera's libraries.
exports() {
	for l in /sysroot/lib/libuClibc-0.9.33.2.so /sysroot/lib/libpthread-0.9.33.2.so; do
		arm-linux-gnueabi-readelf --dyn-syms -W "$l" 2>/dev/null |
			awk '$7 != "UND" && $8 != "" {sub(/@.*/, "", $8); print $8}'
	done | sort -u
}
exports > test/build/camera_exports.txt
# Symbols anyka_ipc itself exports (the yi_p2p_on_* callbacks).
arm-linux-gnueabi-readelf --dyn-syms -W /sysroot/usr/bin/anyka_ipc |
	awk '$7 != "UND" && $8 != "" {sub(/@.*/, "", $8); print $8}' | sort -u > test/build/anyka_exports.txt

fail=0
for so in $OUT/libYiP2P.so $OUT/liboss.so $OUT/libcloudapi.so; do
	missing=$(arm-linux-gnueabi-readelf --dyn-syms -W $so |
		awk '$7 == "UND" && $8 != "" {sub(/@.*/, "", $8); print $8}' | sort -u |
		comm -23 - test/build/camera_exports.txt | comm -23 - test/build/anyka_exports.txt)
	if [ -n "$missing" ]; then
		echo "MISSING in camera libs for $so: $missing"
		fail=1
	fi
	needed=$(arm-linux-gnueabi-readelf -d $so | sed -n 's/.*NEEDED.*\[\(.*\)\]/\1/p' | tr '\n' ' ')
	echo "$so: $(stat -c %s $so) bytes, NEEDED: $needed"
done

# Every symbol anyka_ipc imports from the original must exist in ours.
for pair in libYiP2P.so liboss.so libcloudapi.so; do
	arm-linux-gnueabi-readelf --dyn-syms -W /sysroot/usr/lib/$pair 2>/dev/null |
		awk '$7 != "UND" && ($4 == "FUNC" || $4 == "OBJECT") {sub(/@.*/, "", $8); print $8}' |
		sort -u > test/build/orig_$pair.txt
	arm-linux-gnueabi-readelf --dyn-syms -W $OUT/$pair |
		awk '$7 != "UND" && $8 != "" {sub(/@.*/, "", $8); print $8}' | sort -u > test/build/new_$pair.txt
	arm-linux-gnueabi-readelf --dyn-syms -W /sysroot/usr/bin/anyka_ipc |
		awk '$7 == "UND" {sub(/@.*/, "", $8); print $8}' | sort -u |
		comm -12 - test/build/orig_$pair.txt > test/build/used_$pair.txt
	gap=$(comm -23 test/build/used_$pair.txt test/build/new_$pair.txt | tr '\n' ' ')
	if [ -n "$gap" ]; then
		echo "anyka_ipc needs from $pair but ours lacks: $gap"
		fail=1
	else
		echo "$pair: all $(wc -l < test/build/used_$pair.txt) symbols anyka_ipc uses are provided"
	fi
done
exit $fail
