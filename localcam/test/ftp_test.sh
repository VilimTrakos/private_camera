#!/bin/sh
# Tests the FTP password (FTP_PASSWORD_HASH, STOP_FTP=0 in config.sh) with the
# camera's own busybox under qemu, in a container with no network: config.sh's
# FTP block runs in the camera's sh against a copy of ../rootfs, then the
# camera's tcpsvd + ftpd (as in rc.local) are logged into with its ftpget.
# Needs openssl on the host for the hash.
HERE=$(cd "$(dirname "$0")/.." && pwd)
ROOTFS=$(cd "$HERE/../rootfs" && pwd)
PASS='tajna$ 1'
HASH=$(openssl passwd -1 "$PASS")

# The FTP block of config.sh, from its comment to the first "fi" after it.
sed -n "/# rc.local's ftpd checks root/,/^	fi\$/p" "$HERE/sd/debug/config.sh" > "$HERE/test/build/ftp_block.sh"

docker run --rm --network none -i -v "$HERE":/work:ro -v "$ROOTFS":/sysroot:ro \
	-e PASS="$PASS" -e HASH="$HASH" localcam-build sh -s <<'EOF'
fail=0
result() { if [ "$1" = 0 ]; then echo "ok   $2"; else echo "FAIL $2"; fail=1; fi; }
cp -a /sysroot /tmp/sr 2>/dev/null
cp /tmp/sr/etc/jffs2/passwd /tmp/passwd.orig
B="qemu-arm -L /tmp/sr /tmp/sr/bin/busybox"

# Runs the block in the camera's sh. Applets other than builtins would need
# to exec ARM binaries, so they go through qemu; mount -o bind becomes a copy
# and killall only says what it would stop.
block() {	# STOP_FTP wifi.conf-line
	cp /tmp/passwd.orig /tmp/sr/etc/jffs2/passwd
	mkdir -p /tmp/conf /tmp/t
	printf '%s\r\nHOME_SSID=x\r\n' "$2" > /tmp/conf/wifi.conf
	cat > /tmp/run.sh <<EOS
B="$B"
sed() { \$B sed "\$@"; }
head() { \$B head "\$@"; }
grep() { \$B grep "\$@"; }
mount() { [ "\$1 \$2" = "-o bind" ] && \$B cat "\$3" > "\$4"; }
killall() { echo "killall \$*"; }
D=/tmp/conf T=/tmp/t STOP_FTP=$1
EOS
	cat /work/test/build/ftp_block.sh >> /tmp/run.sh
	$B sh /tmp/run.sh
}

login() {	# password -> ftpget's exit status
	$B ftpget -u root -p "$1" -P 2121 127.0.0.1 /tmp/got.txt /tmp/hello.txt > /dev/null 2>&1
}

echo hello > /tmp/hello.txt
cat > /tmp/ftpd.sh <<EOS
#!/bin/sh
exec $B ftpd -w / -t 600
EOS
chmod 755 /tmp/ftpd.sh
$B tcpsvd 127.0.0.1 2121 /tmp/ftpd.sh 2>/dev/null &
sleep 2

login "anything"
result $? "stock passwd: any password logs in (the hole)"

out=$(block 0 "FTP_PASSWORD_HASH=$HASH")
echo "$out" | grep -q "^ftp: root needs the password"
result $? "valid hash: passwd in RAM put in place ($out)"
grep -qF "root:$HASH:0:0:" /tmp/sr/etc/jffs2/passwd && grep -q "^daemon:x:1:1:" /tmp/sr/etc/jffs2/passwd
result $? "only root's password field changed"
login "$PASS" && [ "$(cat /tmp/got.txt)" = hello ]
result $? "right password logs in and reads a file"
login "${PASS}x"; [ $? != 0 ]
result $? "wrong password refused"
login ""; [ $? != 0 ]
result $? "empty password refused"

for line in "FTP_PASSWORD_HASH=" "FTP_PASSWORD_HASH=plain" "FTP_PASSWORD_HASH=\$1\$ab:c\$x" \
	    "FTP_PASSWORD_HASH=\$6\$abc\$def" "# no hash line"; do
	out=$(block 0 "$line")
	echo "$out" | grep -q "^killall tcpsvd" && cmp -s /tmp/sr/etc/jffs2/passwd /tmp/passwd.orig
	result $? "\"$line\": ftp stopped, passwd untouched"
done
out=$(block 1 "FTP_PASSWORD_HASH=$HASH")
echo "$out" | grep -q "^killall tcpsvd" && ! echo "$out" | grep -q "no valid"
result $? "STOP_FTP=1: ftp stopped even with a hash"

[ $fail = 0 ] && echo "ftp: ALL PASSED" || echo "ftp: FAILED"
exit $fail
EOF
