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

    def __init__(self, hd):
        self.sock = socket.create_connection((HOST, PORT), timeout=5)
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
