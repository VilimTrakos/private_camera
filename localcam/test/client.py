#!/usr/bin/env python3
"""Black-box test of the local web server (libYiP2P replacement).

Talks to the ARM library running under qemu with test/fake_anyka.so standing
in for anyka_ipc. Usage: client.py HOST PORT
"""
import socket
import struct
import sys
import threading
import time

HOST, PORT = sys.argv[1], int(sys.argv[2])
failures = []


def check(cond, msg):
    print(("ok   " if cond else "FAIL ") + msg)
    if not cond:
        failures.append(msg)


def request(raw, timeout=5):
    s = socket.create_connection((HOST, PORT), timeout=timeout)
    s.sendall(raw)
    data = b""
    while True:
        try:
            chunk = s.recv(65536)
        except socket.timeout:
            break
        if not chunk:
            break
        data += chunk
    s.close()
    head, _, body = data.partition(b"\r\n\r\n")
    status = head.split(b"\r\n")[0].decode() if head else ""
    return status, body


def get(path):
    return request(f"GET {path} HTTP/1.1\r\nHost: x\r\n\r\n".encode())


class Stream:
    """Reads framed H.264 from /stream and validates every frame."""

    def __init__(self, hd, rcvbuf=None):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        if rcvbuf:
            # small receive window, so a paused reader really backs up the camera
            self.sock.setsockopt(socket.SOL_SOCKET, socket.SO_RCVBUF, rcvbuf)
        self.sock.settimeout(5)
        self.sock.connect((HOST, PORT))
        self.sock.sendall(f"GET /stream?hd={hd} HTTP/1.1\r\nHost: x\r\n\r\n".encode())
        self.buf = b""
        while b"\r\n\r\n" not in self.buf:
            chunk = self.sock.recv(4096)
            if not chunk:
                break
            self.buf += chunk
        head, _, self.buf = self.buf.partition(b"\r\n\r\n")
        self.status = head.split(b"\r\n")[0].decode() if head else ""
        self.frames = []
        self.errors = []

    def read_for(self, seconds):
        end = time.time() + seconds
        self.sock.settimeout(0.5)
        while time.time() < end:
            try:
                chunk = self.sock.recv(65536)
            except socket.timeout:
                continue
            if not chunk:
                break
            self.buf += chunk
            while len(self.buf) >= 9:
                length, ts, flags = struct.unpack(">IIB", self.buf[:9])
                if len(self.buf) < 9 + length:
                    break
                payload = self.buf[9:9 + length]
                self.buf = self.buf[9 + length:]
                self.validate(length, ts, flags, payload)

    def validate(self, length, ts, flags, p):
        n = struct.unpack(">I", p[5:9])[0]
        key = p[4] == 0x65
        if p[:4] != b"\x00\x00\x00\x01":
            self.errors.append(f"frame {n}: no start code")
        if key != bool(flags & 1):
            self.errors.append(f"frame {n}: key flag mismatch")
        if ts != n * 66:
            self.errors.append(f"frame {n}: ts {ts}")
        if any(p[i] != (n + i) & 0xFF for i in range(9, length, 997)):
            self.errors.append(f"frame {n}: payload corrupted")
        self.frames.append((n, key, length))

    def close(self):
        self.sock.close()


# static files and routing
status, body = get("/")
check(status.endswith("200 OK") and b"jmuxer.min.js" in body, "GET / serves index.html")
status, body = get("/jmuxer.min.js")
check(status.endswith("200 OK") and len(body) > 100000, f"GET /jmuxer.min.js ({len(body)} bytes)")
for bad in ("/../config.sh", "/..%2fconfig.sh", "/.hidden", "/nope.js"):
    status, _ = get(bad)
    check("404" in status, f"GET {bad} -> 404 ({status})")
status, _ = request(b"POST / HTTP/1.1\r\nHost: x\r\nContent-Length: 0\r\n\r\n")
check("405" in status, f"POST -> 405 ({status})")
status, _ = get("/time?t=abc")
check("400" in status, f"/time with bad value -> 400 ({status})")
status, _ = get("/time")
check("400" in status, f"/time without value -> 400 ({status})")

# one HD viewer
s = Stream(1)
check(s.status.endswith("200 OK"), "GET /stream?hd=1 -> 200")
s.read_for(3)
s.close()
nums = [f[0] for f in s.frames]
check(len(s.frames) >= 20, f"HD viewer got {len(s.frames)} frames in 3 s")
check(bool(s.frames) and s.frames[0][1] and s.frames[0][0] % 15 == 0,
      f"stream starts on a key frame (first frame #{nums[0] if nums else None})")
check(nums == list(range(nums[0], nums[0] + len(nums))) if nums else False, "frames in order, none lost")
check(all(f[2] >= 20000 for f in s.frames), "hd=1 selects the main stream")
check(not s.errors, f"payload intact ({s.errors[:3]})")

# SD viewer
s = Stream(0)
s.read_for(2)
s.close()
check(bool(s.frames) and all(f[2] < 20000 for f in s.frames), "hd=0 selects the sub stream")

# read-only diagnostics
status, body = get("/status")
check(status.endswith("200 OK") and b"--- routes" in body and b"--- viewers" in body,
      f"GET /status lists routes and viewers ({len(body)} bytes)")

# image orientation
status, body = get("/image")
check(status.endswith("200 OK") and b'"flip":0' in body and b'"mirror":0' in body,
      f"GET /image reports orientation ({body.strip().decode(errors='replace')})")
status, body = get("/image?flip=1&mirror=0")
check(b'"flip":1' in body and b'"mirror":0' in body, f"flip=1&mirror=0 applied ({body.strip().decode(errors='replace')})")
status, body = get("/image?mirror=1")
check(b'"flip":1' in body and b'"mirror":1' in body, f"mirror=1 keeps flip ({body.strip().decode(errors='replace')})")
get("/image?flip=0&mirror=0")

# night vision and white light
status, body = get("/light")
check(status.endswith("200 OK") and b'"ir":"auto"' in body, f"GET /light defaults to IR auto ({body.strip().decode(errors='replace')})")
status, body = get("/light?ir=on")
check(b'"ir":"on"' in body, f"ir=on applied ({body.strip().decode(errors='replace')})")
status, body = get("/light?ir=off&white=1")
check(b'"ir":"off"' in body and b'"white":1' in body, f"ir=off&white=1 applied ({body.strip().decode(errors='replace')})")
status, body = get("/light?ir=bogus")
check(b'"ir":"off"' in body, "unknown IR mode ignored")
get("/light?ir=auto&white=0")

# slow link: a reader that stalls must not build up delay; frames are dropped
# and the stream resumes on a key frame
time.sleep(2)
s = Stream(1, rcvbuf=8192)
s.read_for(1)
before = len(s.frames)
time.sleep(4)
s.read_for(3)
s.close()
nums = [f[0] for f in s.frames]
gaps = [(a, b) for a, b in zip(nums, nums[1:]) if b != a + 1]
check(before > 0 and bool(gaps), f"stalled reader: frames dropped (gaps {gaps[:3]})")
check(all(b % 15 == 0 for a, b in gaps), "after each gap the stream resumes on a key frame")
check(not s.errors, f"payload intact after drops ({s.errors[:3]})")

# viewer limit, then slots are freed after viewers leave
time.sleep(2)
viewers = [Stream(1) for _ in range(3)]
extra = Stream(1)
check(all(v.status.endswith("200 OK") for v in viewers), "3 viewers at once accepted")
check("503" in extra.status, f"4th viewer refused ({extra.status})")
extra.close()
threads = [threading.Thread(target=v.read_for, args=(2,)) for v in viewers]
for t in threads:
    t.start()
for t in threads:
    t.join()
check(all(len(v.frames) >= 10 and not v.errors for v in viewers), "all 3 viewers receive valid frames")
for v in viewers:
    v.close()
time.sleep(3)
again = [Stream(1) for _ in range(3)]
check(all(v.status.endswith("200 OK") for v in again), "slots free again after viewers disconnect")
for v in again:
    v.close()

print()
print("FAILED: %d" % len(failures) if failures else "ALL PASSED")
sys.exit(1 if failures else 0)
