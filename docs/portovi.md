# Portovi kamere: što je otvoreno i kako je zatvoreno

Stanje iz firmwarea (dekompilirani `daemon`, `anyka_ipc`, `cmd_serverd`, skripte u `/etc/init.d` i `/usr/sbin`) i s `localcam` kartice.

| Port | Tko | Što radi | S localcamom |
|---|---|---|---|
| TCP 80 | naš `libYiP2P.so` | web stranica | ostaje, traži lozinku (`WEB_PASSWORD`) |
| TCP 21 | `tcpsvd 0 21 ftpd -w / -t 600` iz `rc.local` | FTP na cijeli sustav, kao root | traži lozinku (`FTP_PASSWORD_HASH`); bez hasha ugašen |
| TCP 6789 | `daemon` | tvornički test: pokreće programe kao root | samo 127.0.0.1 (`CLOSE_PORTS=1`) |
| TCP 6790 | `daemon` | heartbeat tvorničkog testa, otvori se tek kad se netko spoji na 6789 | samo 127.0.0.1 |
| UDP 8192 | `daemon` | odgovara na traženje kamere | samo 127.0.0.1 |
| TCP 8000, 8012 | `anyka_ipc` | alati za podešavanje slike i zvuka, pale se samo lokalnom naredbom `its,1` / `ats,1` | samo 127.0.0.1 |
| TCP 8782 | `cmd_serverd` | izvršava naredbe za `daemon` i `anyka_ipc` | već samo 127.0.0.1 |
| TCP 8899 | `anyka_ipc` | lokalne naredbe (`its`, `ats`, `ircut`, ...) | već samo 127.0.0.1 |
| TCP 23 | `telnetd` iz `rcS` | telnet | ugasi ga `service.sh` prije nego što se Wi-Fi digne |
| UDP 67 / 68 | `udhcpd` / `udhcpc` | DHCP u vlastitoj mreži kamere / na kućnom Wi-Fiju | ostaje |

## Zašto su bili opasni

- **TCP 21 (FTP).** U `/etc/passwd` root ima prazno polje lozinke (`root::`). U `/etc/shadow` za root postoji hash, ali busybox (1.24.1) gleda `shadow` samo kad je u `passwd` `x`, pa prolazi bilo koja lozinka. S mreže se moglo čitati sve (`wifi.conf`, `upload.conf`, snimke) i zapisati bilo što, pa i skripte koje se pri paljenju pokreću kao root.
- **TCP 6789 (`daemon`).** Bez ikakve provjere tko se spaja (samo checksum paketa) složi naredbu `/tmp/<datoteka> [/tmp/<argument>] /var/stat &` i preda je `cmd_serverd`-u (127.0.0.1:8782), koji je izvrši kao root (`system()`/`popen()`). Argument ide u shell neprovjeren. Paket tipa 4 restarta kameru. Spajanje na port postavi `test_running=1`, pa reset tipka ne radi do restarta, i otvori TCP 6790.
- **UDP 8192 (`daemon`).** Na `Anyka IPC ,Get IP Address!` vrati ime, IP, masku, gateway, DNS, DHCP, ime uređaja, verziju i MAC. Olakšava nalaženje kamere.
- **TCP 8000, 8012.** Kad se upale, slušaju na `0.0.0.0`. Upaliti ih može samo lokalni proces (127.0.0.1:8899), a izvana to je išlo samo preko 6789.

## Kako je zatvoreno

Sve u `localcam/sd/debug/config.sh`, bez diranja flasha:

- **TCP 21:** FTP ostaje za mijenjanje datoteka na kartici, ali s lozinkom. Za roota u `debug/wifi.conf` stoji `FTP_PASSWORD_HASH` (MD5-crypt iz `openssl passwd -1`, jedina vrsta koju kamerin uClibc zna). `config.sh` pri paljenju, prije nego što se Wi-Fi digne, napravi kopiju `/etc/jffs2/passwd` u RAM-u u kojoj root umjesto praznog polja ima taj hash i bind-mounta je preko originala. Flash se ne mijenja, a serijska konzola (`-/bin/sh` u `inittab`) i dalje ne traži prijavu. Bez valjanog hasha, ili uz `STOP_FTP=1`, `tcpsvd` se gasi. FTP ne šifrira ni lozinku ni datoteke.
- **TCP 6789, 6790, UDP 8192, TCP 8000, 8012:** `CLOSE_PORTS=1`. Vatrozid ne postoji: kernel 3.4.35 ima samo osnovni netfilter, bez `ip_tables`/`x_tables` i bez modula za njih, a busybox nema `iptables`. `daemon` se ne gasi, jer hrani hardverski watchdog, ponovno pokreće `anyka_ipc` i obrađuje reset tipku. Zato `lib/libbindguard.so` (`localcam/src/bindguard.c`) presreće `bind()`: na ovim portovima `0.0.0.0` postaje `127.0.0.1`. `daemon` se pokreće preko `scripts/daemon.sh` (bind mount preko `/usr/bin/daemon`, original kopiran u RAM), a `anyka_ipc` preko našeg `anyka_ipc.sh`, oba s tom bibliotekom u `LD_PRELOAD`. Ako biblioteke nema na kartici, ništa se ne mijenja: uClibc ne bi pokrenuo program kojem nedostaje `LD_PRELOAD` biblioteka.
- **TCP 80:** HTTP Basic s lozinkom `WEB_PASSWORD` iz `debug/wifi.conf`. Bez nje je stranica zaključana. Kriva lozinka čeka sekundu, za sve klijente zajedno. Basic nije šifriranje: tko hvata promet na istoj Wi-Fi mreži, vidi lozinku.

Testirano na računalu, pod qemu s kamerinim uClibc-om i busyboxom (`localcam/test/run_test.sh`). FTP: s originalnim `passwd` prolazi bilo koja lozinka, a s hashom samo prava. Pravi `daemon` iz firmwarea bez biblioteke sluša na `00000000:1A85` i `00000000:2000`, a s njom na `0100007F:1A85` i `0100007F:2000`.

## Kako provjeriti na kameri

Na samoj kameri, preko serijske konzole, ne skeniranjem s mreže:

```sh
netstat -ltnu
cat /proc/net/tcp /proc/net/udp   # stupac local_address
```

U `/proc/net/*` su adrese i portovi heksadecimalni: `00000000` = 0.0.0.0, `0100007F` = 127.0.0.1; `0050` = 80, `0015` = 21, `1A85` = 6789, `1A86` = 6790, `2000` = 8192, `1F40` = 8000, `1F4C` = 8012, `224E` = 8782, `22C3` = 8899.

Očekivano: na `0.0.0.0` samo 80, 21 (FTP s lozinkom) i DHCP; 6789, 8192, 8782, 8899 na `127.0.0.1`; 23 i 6790 ih nema. U `debug/localcam.log` piše `ftp: root needs the password (FTP_PASSWORD_HASH)` i `daemon and anyka_ipc: test ports on 127.0.0.1 only`.

S računala je dovoljno otvoriti stranicu (traži lozinku) i FTP s pravom lozinkom. Ne treba skenirati sve portove, isprobavati krive lozinke ni spajati se na 6789: spajanje na 6789 na originalnom firmwareu ugasi reset tipku do restarta.
