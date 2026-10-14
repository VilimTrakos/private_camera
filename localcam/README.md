# localcam: kamera bez Yi oblaka, s vlastitom Wi-Fi mrežom i prikazom uživo

Pokreće se sa SD kartice preko `debug` kuke u `/usr/sbin/service.sh`. Flash se ne mijenja: kad izvadiš karticu (ili preimenuješ mapu `debug`), kamera je opet originalna.

## Korištenje

1. U `debug/ap.conf` na kartici upiši ime mreže i lozinku (8–63 znaka). Može i u Notepadu.
2. Na mobitelu se spoji na tu mrežu i otvori **http://192.168.10.1/**.

Mobitel od kamere ne dobiva gateway ni DNS. Zato za internet i dalje koristi mobilne podatke, a kamera nema nikakav put van. Android će javiti "nema interneta"; ostani spojen.

Stranica kod otvaranja postavi sat kamere prema mobitelu (bez oblaka kamera nema izvor vremena), pa snimke na SD-u dobiju točno vrijeme.

## Što config.sh radi pri paljenju

| Zamjena (`mount -o bind`) | Zašto |
|---|---|
| `/usr/lib/libYiP2P.so` → `lib/libYiP2P.so` | nema P2P veze s oblakom; umjesto toga web server na portu 80 |
| `/usr/lib/liboss.so`, `/usr/lib/libcloudapi.so` → stubovi | nema slanja snimki, updatea ni izvještaja |
| `/usr/bin/cloudAPI` → `cloudAPI` | svi Yi web API pozivi odmah vraćaju grešku |
| `wifi_manage.sh`, `wifi_station.sh`, `wifi_driver.sh`, `wifi_run.sh`, `eth_manage.sh`, `ap.sh`, `wifi_ap.sh`, `update.sh` → `scripts/noop.sh` | `anyka_ipc` više ne traži staru mrežu i ne restarta radio svake 2 minute (to je bio spam i to bi srušilo AP) |
| `/usr/sbin/anyka_ipc.sh` → `scripts/anyka_ipc.sh` | ispis `anyka_ipc` ide u `/dev/null` (`QUIET=1`) |

Zatim u pozadini `scripts/ap_start.sh` upali Wi-Fi driver (RTL8188FU), `hostapd` i DHCP na `192.168.10.1`. Konfiguracija ide u `/tmp`, ništa se ne piše u flash.

Postavke na vrhu `config.sh`:
- `QUIET` (1 = bez spama na konzoli)
- `STOP_FTP` (0 = FTP na portu 21 ostaje; dostupan je samo uređajima na mreži kamere)
- `BLOCK_INTERNET` (briše default rutu svakih 5 s)

`anyka_ipc` ostaje originalan, pa snimanje na SD (`/mnt/record`), detekcija pokreta i noćni način rade kao prije.

## Provjera

- `debug/localcam.log` na kartici: što je zamijenjeno i je li AP podignut.
- Serijska konzola: redovi `[localcam] ...` (web server, gledatelji). Isto je i u `/tmp/localcam.log`.

## Build i test

```sh
./build.sh          # ARM .so datoteke u sd/debug/lib/ (Docker slika localcam-build)
./test/run_test.sh  # pokreće libYiP2P.so pod qemu s kamerinim uClibc-om i testira HTTP
```

## Kako prikaz uživo radi

`anyka_ipc` je povezan s Yi bibliotekama u oba smjera: on poziva `yi_p2p_*`, a biblioteka njega poziva preko `yi_p2p_on_*` funkcija. Kad browser otvori `/stream`, zamjenski `libYiP2P.so` pozove `yi_p2p_on_new_session(sid)`. To je isti poziv koji bi stigao od Yi aplikacije. `anyka_ipc` tada sam šalje H.264 frameove kroz `yi_p2p_send_frame_data()`, a biblioteka ih prosljeđuje browseru. Browser ih reproducira pomoću `jmuxer.min.js` (MIT, lokalna kopija).

## Nije provjereno na kameri

- Podizanje AP-a na ovom primjerku RTL8188FU.
- Je li 20 s dovoljno da `anyka_ipc` pokrene enkoder prije prvog gledatelja (`START_DELAY_S`).
- Kašnjenje i opterećenje procesora kod 720p.
- LED možda i dalje trepće kao da se spaja na mrežu.

Ako se `wlan0` ne pojavi, `anyka_ipc` nakon ~1 minute restarta kameru (njegova provjera mrežne kartice). U tom slučaju izvadi karticu.
