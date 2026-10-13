# localcam: kamera bez Yi oblaka, s lokalnim web prikazom

Pokreće se sa SD kartice preko `debug` kuke u `/usr/sbin/service.sh`. Flash se ne mijenja.

## Što radi

Kad pri paljenju na kartici postoji mapa `debug`, kamera pokrene `debug/config.sh` prije nego što pokrene `daemon` i `anyka_ipc`. Skripta preko `mount -o bind` podmetne:

| Original | Zamjena | Učinak |
|---|---|---|
| `/usr/lib/libYiP2P.so` | `lib/libYiP2P.so` | nema P2P veze s oblakom; umjesto toga web server na portu 80 |
| `/usr/lib/liboss.so` | `lib/liboss.so` | nema slanja snimki i slika u oblak |
| `/usr/lib/libcloudapi.so` | `lib/libcloudapi.so` | nema updatea, izvještaja ni AP uparivanja |
| `/usr/bin/cloudAPI` | `cloudAPI` | svi Yi web API pozivi (prijava, vrijeme, bindkey...) odmah vraćaju grešku |

Osim toga, svakih 5 s briše default rutu, pa kamera ne može izaći na internet, a lokalna mreža i dalje radi. Gasi i otvoreni FTP na portu 21. Oboje se može isključiti na vrhu `config.sh` (`BLOCK_INTERNET`, `STOP_FTP`).

`anyka_ipc` ostaje originalan, pa snimanje na SD (`/mnt/record`), detekcija pokreta i noćni način rade kao prije.

## Postavljanje

1. MicroSD kartica u FAT32. Kopiraj mapu `sd/debug` na karticu, tako da na kartici bude `debug/config.sh`.
2. Kartica u kameru, upali kameru.
3. Nakon ~30 s otvori `http://IP-kamere/` u browseru na istoj mreži.

Stranica kod otvaranja postavi sat kamere prema browseru (bez oblaka kamera nema izvor vremena), pa snimke dobiju točno vrijeme.

Provjera: na kartici se pojavi `debug/localcam.log` s popisom zamijenjenih datoteka. U serijskoj konzoli se vide redovi `[localcam] ...`.

Povratak na original: izvadi karticu ili preimenuj mapu `debug`, pa ponovno upali kameru.

## Build i test

```sh
./build.sh          # ARM .so datoteke u sd/debug/lib/ (Docker slika localcam-build)
./test/run_test.sh  # pokreće libYiP2P.so pod qemu s kamerinim uClibc-om i testira HTTP
```

## Kako to radi

`anyka_ipc` je povezan s Yi bibliotekama u oba smjera: on poziva `yi_p2p_*`, a biblioteka njega poziva preko `yi_p2p_on_*` funkcija. Kad browser otvori `/stream`, zamjenski `libYiP2P.so` pozove `yi_p2p_on_new_session(sid)`. To je isti poziv koji bi stigao od Yi aplikacije. `anyka_ipc` tada sam pokrene `worker_thread` i `stream_send_thread` i šalje H.264 frameove kroz `yi_p2p_send_frame_data()`, a biblioteka ih prosljeđuje browseru. Browser ih reproducira pomoću `jmuxer.min.js` (MIT, lokalna kopija).

## Nije provjereno na kameri

- Je li 20 s dovoljno da `anyka_ipc` pokrene enkoder prije prvog gledatelja (`START_DELAY_S`).
- Kašnjenje i opterećenje procesora kod 720p.
- Kamera se mora spojiti na Wi-Fi (`[wireless]` u `/etc/jffs2/anyka_cfg.ini`). Trenutno ne nalazi spremljenu mrežu.
- Nema lozinke na web stranici: vidi je svatko u lokalnoj mreži.
