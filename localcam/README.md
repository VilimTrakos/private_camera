# localcam: kamera bez Yi oblaka, s prikazom uživo na lokalnoj mreži

Pokreće se sa SD kartice preko `debug` kuke u `/usr/sbin/service.sh`. Flash se ne mijenja: kad izvadiš karticu (ili preimenuješ mapu `debug`), kamera je opet originalna.

## Korištenje

1. Prvi put kopiraj `sd/debug/wifi.conf.example` u `sd/debug/wifi.conf` (prava datoteka nije u gitu jer sadrži lozinke). U `debug/wifi.conf` na kartici upiši kućni Wi-Fi (`HOME_SSID`, `HOME_PASSWORD`) ili ostavi prazno za vlastitu mrežu kamere (`AP_SSID`, `AP_PASSWORD`), te lozinke za stranicu (`WEB_PASSWORD`) i FTP (`FTP_PASSWORD_HASH`, upute u `wifi.conf.example`). Može i u Notepadu.
2. Otvori stranicu kamere u browseru na istoj mreži:
   - kućni Wi-Fi: **http://ADRESA/**, adresu piše u `debug/localcam.log` (redak `net: home Wi-Fi ...`), na serijskoj konzoli ili u popisu uređaja na routeru;
   - vlastita mreža kamere: spoji mobitel na nju i otvori **http://192.168.10.1/**.

Na stranici su:
- **▲ ◀ ▶ ▼** okreću kameru dok se strelica drži (rade i strelice na tipkovnici); kad se pusti ili veza pukne, motor stane;
- **IR** mijenja noćni vid (automatski, uvijek uključen, isključen), **💡** pali bijelo svjetlo;
- **Slika ↕** okreće sliku naopako, **Slika ↔** je zrcali lijevo-desno; postavlja se u kameri, pa vrijedi i za snimke;
- **HD** prebacuje između 1280×720 i 640×360;
- dolje lijevo: kašnjenje u browseru, fps i kbit/s;
- **Snimke** (gore desno) otvara ploču sa strane, opisanu ispod.

Slika, svjetla i postavke snimanja pamte se u `debug/camera.conf`.

## Snimke

Kamera sama snima na karticu, jednu MP4 datoteku (H.264 i AAC) svake minute: `record/2026Y10M19D19H/26M18S41.mp4` znači 19. 10. 2026. u 19:26:18, 41 sekunda. Mapa je sat po lokalnom vremenu kamere. Snimka nastaje u `tmp/record_file_1`, a u `record/` dolazi tek gotova. `anyka_ipc` ih označava kao 3GPP (`ftyp 3gp5`), a Firefox 3GPP ne pušta ("No video with supported format"), iako je sadržaj običan MP4. Zato kamera pri slanju (u browser, kod preuzimanja i na FTP) oznaku zamijeni s `isom`. Zamjena je iste duljine, a datoteke na kartici ostaju kakve jesu.

Ploča **Snimke**:
- **Snima / Ne snima** pali i gasi snimanje (`AkSetRecordMode` u `anyka_ipc`, bez upisa u flash). Isključenje se ponavlja svake minute, jer `anyka_ipc` snimanje pri pokretanju sam upali;
- **Briši starije od** (zadano 14 dana): svakih 10 minuta brišu se sati stariji od toga. Briše samo dok sat kamere ide točno, i nikad ne dira mape snimljene prije nego što je kamera dobila vrijeme (1970, 2023), jer se iz imena takve mape ne zna koliko je stara. Te mape briše se ručno. „Nikad” prepušta brisanje kameri, koja najstarije briše kad se kartica napuni;
- popis po danima i satima: ▶ pusti snimku umjesto slike uživo (sljedeća minuta istog sata krene sama, **● Uživo** vraća prijenos uživo), ⬇ preuzme je kao `2026-10-19_19-26-18.mp4`, 🗑 obriše snimku, sat ili cijeli dan;
- **Server (FTP)**: kamera šalje svaku novu snimku na FTP server, u `MAPA/2026-10-19/19-26-18.mp4`.

O slanju na server:
- upisuje se IP adresa servera (kamera nema DNS) u lokalnoj mreži, jer kamera ne vidi ništa izvan nje;
- šalje samo snimke nastale nakon što je slanje uključeno. Snimka se prvo spremi kao `.part`, a pravo ime dobije kad je cijela;
- dokle je stiglo piše u `debug/upload.state`. Ako server ne radi, pokušava ponovno nakon 30 s, pa sve rjeđe, do jednom u 5 minuta, i šalje sve što je u međuvremenu nastalo;
- **Provjeri vezu** se prijavi, napravi mapu, zapiše, preimenuje i obriše probnu datoteku `.localcam-test`, a ne sprema ništa;
- kad kamera nakon nestanka struje nema sat, vrijeme uzme sa servera (MDTM probne datoteke). Dok sat ima, ne dira ga: neki serveri MDTM ne daju u UTC-u;
- snimke ostaju i na kartici, dok ih ne obriše pravilo iznad;
- postavke su u `debug/upload.conf`, a lozinka je ondje u čistom tekstu. Stranica je nikad ne šalje natrag u browser.

Promjene (snimanje, brisanje, server) idu POST zahtjevom sa zaglavljem `X-Localcam: 1`. Stranica s neke druge web adrese to zaglavlje ne može dodati, pa preko browsera ne može brisati snimke ni mijenjati postavke. Stranica traži lozinku `WEB_PASSWORD`; korisničko ime može biti bilo što.

Kamera ni na kućnom Wi-Fiju nema put van: `scripts/udhcpc.sh` ne uzima gateway ni DNS od routera, `/etc/resolv.conf` je prazan, a `watch.sh` briše default rutu ako je itko doda. Za dodatnu sigurnost na routeru se može blokirati internet za MAC adresu kamere. U vlastitoj mreži kamere mobitel ne dobiva gateway ni DNS, pa za internet i dalje koristi mobilne podatke. Stranica kod otvaranja postavi sat kamere prema mobitelu (bez oblaka kamera nema izvor vremena), pa snimke dobiju točno vrijeme.

Gasi se izvlačenjem napajanja; karticu vadi tek kad je kamera ugašena.

## Izmjene bez vađenja kartice

Dok je kamera na mreži, datoteke na kartici mijenjaju se preko FTP-a (korisnik `root`, FTP lozinka). Iz WSL-a ide preko Windowsa (`curl.exe`), jer WSL ne vidi kućnu mrežu:

```sh
curl.exe -u 'root:LOZINKA' -T sd/debug/www/index.html ftp://ADRESA/mnt/debug/www/index.html
```

`config.sh` kopira karticu u RAM samo pri paljenju, pa nakon uploada treba restartati kameru (izvući i vratiti napajanje). Zatim **osvježi stranicu**: otvorena stranica se nakon restarta sama ponovno spoji na video, ali ostaje stara verzija.

## Što config.sh radi pri paljenju

Originali svega što se zamjenjuje su u [../original/](../original/).

Sve se prvo kopira u RAM (`/tmp/localcam`) i radi odande. Kad snimanje krene, `anyka_ipc` pokrene `fuser -m -k /mnt`, što ubija svaki proces s otvorenom datotekom na kartici, pa i njega samog kad bi mu biblioteke bile na kartici.

| Zamjena (`mount -o bind`) | Zašto |
|---|---|
| `/usr/lib/libYiP2P.so` | nema P2P veze s oblakom; umjesto toga web server na portu 80 |
| `/usr/lib/liboss.so`, `/usr/lib/libcloudapi.so` | stubovi: nema slanja snimki, updatea ni izvještaja |
| `/usr/bin/cloudAPI` | svi Yi web API pozivi vraćaju grešku (nakon 2 s, da petlja ponavljanja ne troši procesor) |
| `wifi_manage.sh`, `wifi_station.sh`, `wifi_driver.sh`, `wifi_run.sh`, `eth_manage.sh`, `ap.sh`, `wifi_ap.sh`, `update.sh` | prazne skripte: `anyka_ipc` ne traži staru mrežu i ne restarta radio |
| `/usr/sbin/anyka_ipc.sh` | ispis `anyka_ipc` u `/dev/null` (`QUIET=1`), log svakog kraja rada, najviše 4 brza pada zaredom |
| `/usr/bin/daemon` | isti program, ali tvornički portovi slušaju samo unutar kamere (`CLOSE_PORTS`) |
| `/etc/jffs2/passwd` | root dobiva FTP lozinku (`FTP_PASSWORD_HASH`) |

Pozadinski poslovi (svi iz RAM-a):
- `scripts/net_start.sh` upali Wi-Fi driver (RTL8188FU) i spoji kameru na kućni Wi-Fi bez gatewaya i DNS-a (`scripts/udhcpc.sh`), ili, ako to ne uspije ili nije upisano, digne vlastitu mrežu (`hostapd`, DHCP na `192.168.10.1`);
- `scripts/watch.sh` briše default rutu (`BLOCK_INTERNET`) i ponovno montira karticu ako nije montirana;
- `scripts/sdguard.sh` je u PATH-u samo za `anyka_ipc` kao `fuser`, `umount` i `mount`: dok je kartica montirana, njegov `fuser_remount` (`fuser -m -k /mnt`, `umount -lf /mnt`, `mount -t vfat`) ne radi ništa. Bez toga bi se exFAT kartica odmontirala i snimanje bi stalo.

Postavke na vrhu `config.sh`: `QUIET`, `STOP_FTP` (0 = FTP ostaje, s lozinkom; bez `FTP_PASSWORD_HASH` se gasi), `CLOSE_PORTS` (1 = tvornički portovi samo unutar kamere), `BLOCK_INTERNET`, `DIAG` (popis procesa prije neočekivanog kraja `anyka_ipc`, u `debug/anyka_exit.log`).

## Provjera

`debug/localcam.log` na kartici: što je zamijenjeno, na koju se mrežu kamera spojila, svaki start i kraj `anyka_ipc`. Na serijskoj konzoli redovi `[localcam] ...`.

Bez kartice i UART-a: **http://ADRESA/status** pokazuje uptime, rute (ne smije biti default rute), DNS (prazan), Wi-Fi signal, mountove, motore, snimanje, slanje na server i gledatelje.

## Build i test

```sh
./build.sh          # ARM .so datoteke u sd/debug/lib/ (Docker slika localcam-build, treba ../rootfs iz KAMERA.md)
./test/run_test.sh  # libYiP2P.so pod qemu s kamerinim uClibc-om, HTTP testovi, portovi i FTP lozinka
```

Test umjesto kartice koristi privremenu mapu s izmišljenim snimkama, a za slanje diže mali FTP server u Pythonu. Taj server u PASV odgovoru namjerno daje krivu adresu, jer kamera mora koristiti adresu kontrolne veze.

Testovi rade s kamerinim busyboxom i uClibc-om. Naredbe iz Docker kontejnera ne vrijede kao dokaz, jer kamera nema sve što Debian ima (npr. `tr`).

## Kako prikaz uživo radi

`anyka_ipc` je povezan s Yi bibliotekama u oba smjera: on poziva `yi_p2p_*`, a biblioteka njega poziva preko `yi_p2p_on_*` funkcija. Kad browser otvori `/stream`, zamjenski `libYiP2P.so` pozove `yi_p2p_on_new_session(sid)`. To je isti poziv koji bi stigao od Yi aplikacije. `anyka_ipc` tada sam šalje H.264 frameove kroz `yi_p2p_send_frame_data()`, a biblioteka ih prosljeđuje browseru. Browser ih reproducira pomoću `jmuxer.min.js` (MIT, lokalna kopija). Ako Wi-Fi zaostaje (na čekanju je više nego što stane u send buffer, najviše 256 KB), frameovi se odbacuju do sljedećeg key framea, umjesto da se kašnjenje gomila.
