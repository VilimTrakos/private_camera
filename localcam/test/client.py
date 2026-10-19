#!/usr/bin/env python3
"""Black-box test of the local web server (libYiP2P replacement).

Talks to the ARM library running under qemu with test/fake_anyka.so standing
in for anyka_ipc. Usage:
  client.py --setup SD      fill a folder that stands in for the SD card
  client.py HOST PORT SD    run the tests (SD: the same folder)
"""
import os
import posixpath
import socket
import struct
import sys
import threading
import time
import urllib.parse


def hour_dir(t):
    """anyka_ipc's folder for the hour of t (the test runs in UTC)."""
    return time.strftime("%YY%mM%dD%HH", time.gmtime(t))


def content(name, size):
    """Made-up recording data, different for every file."""
    seed = sum(name.encode())
    return bytes((seed + i * 7) & 0xFF for i in range(size))


# anyka_ipc's files start like this: ftyp 3gp5, compatible 3gp5 3gp4 isom
FTYP_3GP = bytes.fromhex("0000001c") + b"ftyp3gp5" + bytes(4) + b"3gp53gp4isom"
FTYP_ISOM = bytes.fromhex("0000001c") + b"ftypisom" + bytes(4) + b"isomisomisom"


def setup(sd):
    now = time.time()
    rec = os.path.join(sd, "record")
    files = {
        hour_dir(now): ["01M00S59.mp4", "02M00S59.mp4", "03M10S20.mp4"],
        hour_dir(now - 30 * 3600): ["10M00S59.mp4", "11M00S59.mp4"],
        hour_dir(now - 20 * 86400): ["10M00S59.mp4", "11M00S59.mp4"],
        "2023Y08M04D00H": ["23M59S60.mp4"],  # recorded before the camera had the time
    }
    for d, names in files.items():
        os.makedirs(os.path.join(rec, d), exist_ok=True)
        for n in names:
            with open(os.path.join(rec, d, n), "wb") as f:
                data = content(d + n, 50000)
                if n == "02M00S59.mp4":
                    data = FTYP_3GP + data[len(FTYP_3GP):]
                f.write(data)
    os.makedirs(os.path.join(rec, "notes"), exist_ok=True)  # not a recording folder
    os.makedirs(os.path.join(sd, "debug"), exist_ok=True)


if sys.argv[1] == "--setup":
    setup(sys.argv[2])
    sys.exit(0)

HOST, PORT, SD = sys.argv[1], int(sys.argv[2]), sys.argv[3]
REC = os.path.join(SD, "record")
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


def get_full(path, extra=""):
    """Like get(), plus the response headers (lower-case names)."""
    s = socket.create_connection((HOST, PORT), timeout=10)
    s.sendall(f"GET {path} HTTP/1.1\r\nHost: x\r\n{extra}\r\n".encode())
    data = b""
    while True:
        chunk = s.recv(65536)
        if not chunk:
            break
        data += chunk
    s.close()
    head, _, body = data.partition(b"\r\n\r\n")
    lines = head.decode().split("\r\n")
    headers = {k.strip().lower(): v.strip() for k, _, v in (l.partition(":") for l in lines[1:])}
    return lines[0], headers, body


def post(path, fields, token=True, timeout=40):
    body = urllib.parse.urlencode(fields).encode()
    hdr = f"POST {path} HTTP/1.1\r\nHost: x\r\nContent-Type: application/x-www-form-urlencoded\r\n"
    if token:
        hdr += "X-Localcam: 1\r\n"
    hdr += f"Content-Length: {len(body)}\r\n\r\n"
    return request(hdr.encode() + body, timeout=timeout)


def get_json(path):
    import json
    status, body = get(path)
    return json.loads(body) if status.endswith("200 OK") else {"_status": status}


def post_json(path, fields):
    import json
    status, body = post(path, fields)
    return json.loads(body) if status.endswith("200 OK") else {"_status": status}


def wait_for(cond, seconds):
    end = time.time() + seconds
    while time.time() < end:
        if cond():
            return True
        time.sleep(0.25)
    return cond()


class FTPServer:
    """Just enough of an FTP server (passive mode) for the camera's uploader."""

    def __init__(self, root, user, password, port=0):
        self.root, self.user, self.password = root, user, password
        self.log = []
        self.sock = socket.socket()
        self.sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.sock.bind(("127.0.0.1", port))
        self.sock.listen(4)
        self.port = self.sock.getsockname()[1]
        threading.Thread(target=self.serve, daemon=True).start()

    def stop(self):
        # shutdown() wakes the thread blocked in accept(); close() alone does not
        self.sock.shutdown(socket.SHUT_RDWR)
        self.sock.close()

    def serve(self):
        while True:
            try:
                c, _ = self.sock.accept()
            except OSError:
                return
            threading.Thread(target=self.session, args=(c,), daemon=True).start()

    def local(self, cwd, arg):
        p = posixpath.normpath(posixpath.join(cwd, arg))
        return p, os.path.join(self.root, p.lstrip("/"))

    def session(self, c):
        f = c.makefile("rb")
        send = lambda s: c.sendall((s + "\r\n").encode())
        send("220-test server\r\n220 ready")
        cwd, user, authed, data, rnfr = "/", None, False, None, None
        for raw in f:
            cmd, _, arg = raw.decode().rstrip("\r\n").partition(" ")
            cmd = cmd.upper()
            self.log.append((cmd, arg))
            if cmd == "USER":
                user = arg
                send("331 password please")
            elif cmd == "PASS":
                authed = user == self.user and arg == self.password
                send("230 logged in" if authed else "530 login incorrect")
            elif cmd == "QUIT":
                send("221 bye")
                break
            elif not authed:
                send("530 log in first")
            elif cmd == "TYPE":
                send("200 ok")
            elif cmd == "PWD":
                send(f'257 "{cwd}" is the current directory')
            elif cmd == "CWD":
                p, l = self.local(cwd, arg)
                if os.path.isdir(l):
                    cwd = p
                    send("250 ok")
                else:
                    send("550 no such directory")
            elif cmd == "MKD":
                p, l = self.local(cwd, arg)
                try:
                    os.mkdir(l)
                    send(f'257 "{p}" created')
                except OSError:
                    send("550 cannot create")
            elif cmd == "PASV":
                data = socket.socket()
                data.bind(("127.0.0.1", 0))
                data.listen(1)
                port = data.getsockname()[1]
                send(f"227 Entering Passive Mode (10,9,8,7,{port >> 8},{port & 255})")
            elif cmd == "STOR" and data:
                _, l = self.local(cwd, arg)
                send("150 send it")
                d, _ = data.accept()
                with open(l, "wb") as out:
                    while True:
                        chunk = d.recv(65536)
                        if not chunk:
                            break
                        out.write(chunk)
                d.close()
                data.close()
                data = None
                send("226 stored")
            elif cmd == "RNFR":
                rnfr = self.local(cwd, arg)[1]
                send("350 go on" if os.path.exists(rnfr) else "550 no such file")
            elif cmd == "RNTO" and rnfr:
                os.replace(rnfr, self.local(cwd, arg)[1])
                rnfr = None
                send("250 renamed")
            elif cmd == "DELE":
                try:
                    os.remove(self.local(cwd, arg)[1])
                    send("250 deleted")
                except OSError:
                    send("550 no such file")
            elif cmd == "MDTM":
                l = self.local(cwd, arg)[1]
                if os.path.exists(l):
                    send("213 " + time.strftime("%Y%m%d%H%M%S", time.gmtime(os.path.getmtime(l))))
                else:
                    send("550 no such file")
            else:
                send("502 not implemented")
        c.close()

    def files(self):
        out = []
        for d, _, names in os.walk(self.root):
            out += [os.path.relpath(os.path.join(d, n), self.root) for n in names]
        return sorted(out)


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

# pan/tilt: moves while repeated, stops on "stop" or when the browser goes quiet
def ptz_state():
    _, b = get("/status")
    return b.split(b"--- pan/tilt\n", 1)[1].split(b"\n", 1)[0].decode() if b"--- pan/tilt" in b else "?"

status, _ = get("/ptz?dir=left")
check(status.endswith("200 OK") and ptz_state() == "left", "ptz left starts the motor")
get("/ptz?dir=stop")
check(ptz_state() == "stopped", "ptz stop stops it")
get("/ptz?dir=up")
time.sleep(0.4)
get("/ptz?dir=up")
time.sleep(0.4)
check(ptz_state() == "up", "repeating the direction keeps it moving")
time.sleep(1.0)
check(ptz_state() == "stopped", "motor stops by itself when the browser goes quiet")
status, _ = get("/ptz?dir=sideways")
check("400" in status, f"unknown direction refused ({status})")

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

# ---------- recordings ----------

def sd_dirs():
    return sorted(d for d in os.listdir(REC) if d != "notes")


def read(path):
    with open(path, "rb") as f:
        return f.read()


old = hour_dir(time.time() - 20 * 86400)
check(wait_for(lambda: old not in os.listdir(REC), 5), "folder older than 14 days deleted at startup")
dirs = sd_dirs()
H0, H30 = dirs[-1], dirs[-2]
check("2023Y08M04D00H" in dirs, "folder from before the clock was set is kept")

j = get_json("/rec")
check(j.get("dirs") == dirs and j.get("clock") == 1 and j.get("now") == hour_dir(time.time()),
      f"GET /rec lists the hour folders ({j})")
j = get_json(f"/rec?d={H0}")
names = [f["n"] for f in j.get("files", [])]
check(names == ["01M00S59.mp4", "02M00S59.mp4", "03M10S20.mp4"] and
      all(f["s"] == 50000 for f in j["files"]), f"GET /rec?d= lists files with sizes ({names})")
for bad in ("../debug", "2026Y10M19D19", "notes"):
    status, _ = get(f"/rec?d={bad}")
    check("400" in status, f"/rec?d={bad} refused ({status})")

data = read(os.path.join(REC, H0, "01M00S59.mp4"))
status, h, body = get_full(f"/rec/{H0}/01M00S59.mp4")
check(status.endswith("200 OK") and body == data and h.get("accept-ranges") == "bytes" and
      h.get("content-type") == "video/mp4", f"GET a recording ({status}, {len(body)} bytes)")
status, h, body = get_full(f"/rec/{H0}/01M00S59.mp4", "Range: bytes=10-19\r\n")
check("206" in status and body == data[10:20] and h.get("content-range") == "bytes 10-19/50000",
      f"Range bytes=10-19 ({status}, {h.get('content-range')})")
status, h, body = get_full(f"/rec/{H0}/01M00S59.mp4", "Range: bytes=49990-\r\n")
check("206" in status and body == data[49990:], f"Range bytes=49990- ({status}, {len(body)} bytes)")
status, h, body = get_full(f"/rec/{H0}/01M00S59.mp4", "Range: bytes=-5\r\n")
check("206" in status and body == data[-5:], f"Range bytes=-5 ({status})")
status, h, body = get_full(f"/rec/{H0}/01M00S59.mp4", "Range: bytes=50000-\r\n")
check("416" in status and h.get("content-range") == "bytes */50000", f"Range past the end -> 416 ({status})")
data = read(os.path.join(REC, H0, "02M00S59.mp4"))
status, h, body = get_full(f"/rec/{H0}/02M00S59.mp4")
check(data[:28] == FTYP_3GP and body == FTYP_ISOM + data[28:],
      "served as isom instead of 3gp5 (Firefox will not play 3GPP), the rest unchanged")
status, h, body = get_full(f"/rec/{H0}/02M00S59.mp4", "Range: bytes=8-11\r\n")
check(body == b"isom", f"also inside a range ({body})")
check(read(os.path.join(REC, H0, "02M00S59.mp4")) == data, "the file on the card is not changed")
status, h, _ = get_full(f"/rec/{H0}/01M00S59.mp4?dl=1")
want = f'{H0[0:4]}-{H0[5:7]}-{H0[8:10]}_{H0[11:13]}-01-00.mp4'
check(want in h.get("content-disposition", ""), f"?dl=1 downloads as {want} ({h.get('content-disposition')})")
for bad in (f"/rec/{H0}/../../debug/camera.conf", "/rec/../debug/x.mp4", f"/rec/{H0}/nope.mp4",
            f"/rec/{H0}", "/rec/notes/x.mp4"):
    status, _ = get(bad)
    check("404" in status, f"GET {bad} -> 404 ({status})")

# recording on/off: POST only, and only with the header a foreign page cannot add
status, _ = post("/record", {"on": "0"}, token=False)
check("403" in status, f"POST without X-Localcam -> 403 ({status})")
status, _ = get("/record?on=0")
check(not os.path.exists(os.path.join(SD, "fake_record_mode")), "GET /record?on=0 changes nothing")
j = post_json("/record", {"on": "0"})
check(j.get("on") == 0 and j.get("keep") == 14 and j.get("total_mb", 0) > 0,
      f"POST /record on=0 ({j})")
check(read(os.path.join(SD, "fake_record_mode")) == b"0", "recording stopped in anyka_ipc (mode 0)")
conf = read(os.path.join(SD, "debug", "camera.conf")).decode()
check("REC=0" in conf and "KEEP_DAYS=14" in conf, f"saved in camera.conf ({conf.split()})")
j = post_json("/record", {"on": "1"})
check(j.get("on") == 1 and read(os.path.join(SD, "fake_record_mode")) == b"1",
      "POST /record on=1 records all the time again (mode 1)")

# FTP upload
ftp_root = os.path.join(SD, "ftp")
os.makedirs(ftp_root)
ftp = FTPServer(ftp_root, "cam", "s3cret & co")
form = {"host": "127.0.0.1", "port": str(ftp.port), "user": "cam", "pass": "s3cret & co",
        "path": "/kamera/dvor"}
j = get_json("/upload")
check(j.get("on") == 0 and j.get("pass") == 0, f"GET /upload: off at first ({j})")
j = post_json("/upload/test", dict(form, **{"pass": "wrong"}))
check(j.get("ok") is False and "prijava" in j.get("msg", ""), f"test with a wrong password fails ({j})")
j = post_json("/upload/test", dict(form, host="nas.local"))
check(j.get("ok") is False and "IP adresa" in j.get("msg", ""), f"test with a host name fails ({j})")
j = post_json("/upload/test", form)
check(j.get("ok") is True and abs(j.get("server_time", 0) - time.time()) < 60,
      f"test with the right settings works and reads the server clock ({j})")
check(os.path.isdir(os.path.join(ftp_root, "kamera", "dvor")) and ftp.files() == [],
      f"test created the folder and removed its file ({ftp.files()})")
check(get_json("/upload").get("on") == 0, "the test saved nothing")

j = post_json("/upload", dict(form, on="1"))
check(j.get("on") == 1 and j.get("pass") == 1 and j.get("host") == "127.0.0.1",
      f"POST /upload switches it on ({j})")
_, body = get("/upload")
check(b"s3cret" not in body, "GET /upload never shows the password")
conf = read(os.path.join(SD, "debug", "upload.conf")).decode()
check("FTP_PASS=s3cret & co" in conf and "UPLOAD=1" in conf, "settings saved in upload.conf")
time.sleep(3)
check(ftp.files() == [], f"recordings already on the card are not sent ({ftp.files()})")

new = os.path.join(REC, H0, "04M00S59.mp4")
with open(new, "wb") as f:
    f.write(FTYP_3GP + content("new", 300000))
remote = os.path.join("kamera", "dvor", f"{H0[0:4]}-{H0[5:7]}-{H0[8:10]}", f"{H0[11:13]}-04-00.mp4")
check(wait_for(lambda: remote in ftp.files(), 10), f"a new recording is sent ({ftp.files()})")
check(wait_for(lambda: get_json("/upload").get("last") == f"{H0}/04M00S59.mp4", 5) and
      read(os.path.join(ftp_root, remote)) == FTYP_ISOM + read(new)[28:],
      "it arrives complete (as isom), under its time")
check(not any(f.endswith(".part") for f in ftp.files()), "no .part file left")
check(b"LAST=" + f"{H0}/04M00S59.mp4".encode() in read(os.path.join(SD, "debug", "upload.state")),
      "progress saved in upload.state")
check(any(c == "PASV" for c, _ in ftp.log) and any(c == "RNFR" for c, _ in ftp.log),
      "passive mode with the server's own address, upload as .part then renamed")

ftp.stop()
with open(os.path.join(REC, H0, "05M00S59.mp4"), "wb") as f:
    f.write(content("later", 1000))
check(wait_for(lambda: get_json("/upload").get("error", "") != "", 8),
      f"server down: the page shows an error ({get_json('/upload').get('error')})")
check(get_json("/upload").get("pending") == 1, "and one recording waiting")
ftp = FTPServer(ftp_root, "cam", "s3cret & co", port=int(form["port"]))
remote2 = remote.replace("04-00", "05-00")
check(wait_for(lambda: remote2 in ftp.files(), 15), f"server back: the waiting one is sent ({ftp.files()})")
check(wait_for(lambda: get_json("/upload").get("error") == "", 3), "and the error is gone")
j = post_json("/upload", {"on": "0"})
check(j.get("on") == 0 and j.get("host") == "127.0.0.1", f"switched off, settings kept ({j})")

# deleting
status, _ = post("/rec/delete", {"p": f"{H0}/03M10S20.mp4"}, token=False)
check("403" in status, f"delete without X-Localcam -> 403 ({status})")
j = post_json("/rec/delete", {"p": f"{H0}/03M10S20.mp4"})
check(j.get("deleted") == 1 and not os.path.exists(os.path.join(REC, H0, "03M10S20.mp4")),
      f"delete one recording ({j})")
for bad in ("../debug/camera.conf", f"{H0}/../x.mp4", "notes", f"{H0}/camera.conf"):
    status, _ = post("/rec/delete", {"p": bad})
    check("400" in status, f"delete {bad} refused ({status})")
check(os.path.exists(os.path.join(SD, "debug", "camera.conf")), "camera.conf still there")
j = post_json("/rec/delete", {"p": H0})
check(j.get("deleted") == 4 and os.path.isdir(os.path.join(REC, H0)) and
      os.listdir(os.path.join(REC, H0)) == [],
      f"delete the current hour: files gone, folder kept for anyka_ipc ({j})")

# keeping fewer days deletes the 30 h old folder at once
j = post_json("/record", {"keep": "1"})
check(j.get("keep") == 1, f"keep=1 ({j})")
check(wait_for(lambda: H30 not in os.listdir(REC), 5), "folder older than 1 day deleted")
check("2023Y08M04D00H" in os.listdir(REC) and H0 in os.listdir(REC),
      "the current hour and the one from before the clock was set are kept")
j = post_json("/rec/delete", {"p": "2023Y08M04D"})
check(j.get("deleted") == 1 and "2023Y08M04D00H" not in os.listdir(REC), f"delete a whole day ({j})")

status, body = get("/status")
check(b"--- recording\non, kept 1 days" in body and b"--- upload\noff" in body,
      "GET /status shows recording and upload")

print()
print("FAILED: %d" % len(failures) if failures else "ALL PASSED")
sys.exit(1 if failures else 0)
