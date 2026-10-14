# localcam: kamera bez Yi oblaka, s vlastitom Wi-Fi mrežom i prikazom uživo

Pokreće se sa SD kartice preko `debug` kuke u `/usr/sbin/service.sh`. Flash se ne mijenja: kad izvadiš karticu (ili preimenuješ mapu `debug`), kamera je opet originalna.

## Korištenje

1. U `debug/wifi.conf` na kartici upiši kućni Wi-Fi (`HOME_SSID`, `HOME_PASSWORD`) ili ostavi prazno za vlastitu mrežu kamere (`AP_SSID`, `AP_PASSWORD`). Može i u Notepadu.
2. Otvori stranicu kamere u browseru na istoj mreži:
   - kućni Wi-Fi: **http://ADRESA/**, adresu piše u `debug/localcam.log` (redak `net: home Wi-Fi ...`), na serijskoj konzoli ili u popisu uređaja na routeru;
   - vlastita mreža kamere: spoji mobitel na nju i otvori **http://192.168.10.1/**.

Na stranici su:
- **↕** okreće sliku naopako, **↔** je zrcali lijevo-desno; oboje se postavlja u kameri, pa vrijedi i za snimke, i pamti se u `debug/image.conf`;
- **HD** prebacuje između 1280×720 i 640×360;
- dolje lijevo: kašnjenje u browseru, fps i kbit/s.

Kamera ni na kućnom Wi-Fiju nema put van: `scripts/udhcpc.sh` ne uzima gateway ni DNS od routera, `/etc/resolv.conf` je prazan, a `watch.sh` briše default rutu ako je itko doda. Za dodatnu sigurnost na routeru se može blokirati internet za MAC adresu kamere. U vlastitoj mreži kamere mobitel ne dobiva gateway ni DNS, pa za internet i dalje koristi mobilne podatke. Stranica kod otvaranja postavi sat kamere prema mobitelu (bez oblaka kamera nema izvor vremena), pa snimke dobiju točno vrijeme.

Gasi se izvlačenjem napajanja; karticu vadi tek kad je kamera ugašena.

## Što config.sh radi pri paljenju

Sve se prvo kopira u RAM (`/tmp/localcam`) i radi odande. Kad snimanje krene, `anyka_ipc` pokrene `fuser -m -k /mnt`, što ubija svaki proces s otvorenom datotekom na kartici, pa i njega samog kad bi mu biblioteke bile na kartici.

| Zamjena (`mount -o bind`) | Zašto |
|---|---|
| `/usr/lib/libYiP2P.so` | nema P2P veze s oblakom; umjesto toga web server na portu 80 |
| `/usr/lib/liboss.so`, `/usr/lib/libcloudapi.so` | stubovi: nema slanja snimki, updatea ni izvještaja |
| `/usr/bin/cloudAPI` | svi Yi web API pozivi vraćaju grešku (nakon 2 s, da petlja ponavljanja ne troši procesor) |
| `wifi_manage.sh`, `wifi_station.sh`, `wifi_driver.sh`, `wifi_run.sh`, `eth_manage.sh`, `ap.sh`, `wifi_ap.sh`, `update.sh` | prazne skripte: `anyka_ipc` ne traži staru mrežu i ne restarta radio |
| `/usr/sbin/anyka_ipc.sh` | ispis `anyka_ipc` u `/dev/null` (`QUIET=1`), log svakog kraja rada, najviše 4 brza pada zaredom |

Pozadinski poslovi (svi iz RAM-a):
- `scripts/net_start.sh` upali Wi-Fi driver (RTL8188FU) i spoji kameru na kućni Wi-Fi bez gatewaya i DNS-a (`scripts/udhcpc.sh`), ili, ako to ne uspije ili nije upisano, digne vlastitu mrežu (`hostapd`, DHCP na `192.168.10.1`);
- `scripts/watch.sh` briše default rutu (`BLOCK_INTERNET`) i ponovno montira karticu ako nije montirana;
- `scripts/sdguard.sh` je u PATH-u samo za `anyka_ipc` kao `fuser`, `umount` i `mount`: dok je kartica montirana, njegov `fuser_remount` (`fuser -m -k /mnt`, `umount -lf /mnt`, `mount -t vfat`) ne radi ništa. Bez toga bi se exFAT kartica odmontirala i snimanje bi stalo.

Postavke na vrhu `config.sh`: `QUIET`, `STOP_FTP` (0 = FTP na portu 21 ostaje: pristup cijelom sustavu kamere bez lozinke, za svakoga na istoj mreži; na kućnom Wi-Fiju to je cijela kućna mreža), `BLOCK_INTERNET`, `DIAG` (popis procesa prije neočekivanog kraja `anyka_ipc`, u `debug/anyka_exit.log`).

## Provjera

`debug/localcam.log` na kartici: što je zamijenjeno, je li AP podignut, svaki start i kraj `anyka_ipc`. Na serijskoj konzoli redovi `[localcam] ...`.

## Build i test

```sh
./build.sh          # ARM .so datoteke u sd/debug/lib/ (Docker slika localcam-build)
./test/run_test.sh  # libYiP2P.so pod qemu s kamerinim uClibc-om, HTTP testovi
```

Testovi rade s kamerinim busyboxom i uClibc-om. Naredbe iz Docker kontejnera ne vrijede kao dokaz, jer kamera nema sve što Debian ima (npr. `tr`).

## Kako prikaz uživo radi

`anyka_ipc` je povezan s Yi bibliotekama u oba smjera: on poziva `yi_p2p_*`, a biblioteka njega poziva preko `yi_p2p_on_*` funkcija. Kad browser otvori `/stream`, zamjenski `libYiP2P.so` pozove `yi_p2p_on_new_session(sid)`. To je isti poziv koji bi stigao od Yi aplikacije. `anyka_ipc` tada sam šalje H.264 frameove kroz `yi_p2p_send_frame_data()`, a biblioteka ih prosljeđuje browseru. Browser ih reproducira pomoću `jmuxer.min.js` (MIT, lokalna kopija). Ako Wi-Fi zaostaje (više od ~96 KB na čekanju), frameovi se odbacuju do sljedećeg key framea, umjesto da se kašnjenje gomila.
