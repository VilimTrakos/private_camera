# reverse_engineer_camera

Yi/Kami Wi-Fi kamera (čip Anyka AK3918) bez Yi oblaka. Slika uživo, motori, noćni vid i svjetlo rade u browseru na lokalnoj mreži, snimanje na SD karticu ostaje, a kamera nema put na internet. Flash se ne mijenja: sve se pokreće sa SD kartice, a bez nje je kamera opet originalna.

| Mapa | Što je |
|---|---|
| [KAMERA.md](KAMERA.md), `serial.ps1` | serijska konzola (UART) i kopiranje flasha |
| [original/](original/) | originalni firmware: dekompajlirani dijelovi koji idu prema oblaku i skripte koje se zamjenjuju |
| [localcam/](localcam/) | zamjena, s uputama za korištenje |

## Original i zamjena

| Original (`original/`) | Zamjena (`localcam/`) | Što sad radi |
|---|---|---|
| `usr/lib/libYiP2P.so` | `src/libyip2p_local.c` | web server na portu 80 umjesto P2P veze s Yi serverima |
| `usr/lib/liboss.so`, `usr/lib/libcloudapi.so` | `src/cloud_stubs.c` | svaka funkcija oblaka vrati grešku i ništa ne šalje |
| `usr/bin/cloudAPI` | `sd/debug/cloudAPI` | svaki poziv dobije odgovor "failed" |
| Wi-Fi i update skripte iz `usr/sbin/` | `sd/debug/scripts/noop.sh`, `net_start.sh` | `anyka_ipc` ne dira Wi-Fi ni update; mrežu diže `net_start.sh` |
| `usr/sbin/anyka_ipc.sh` | `sd/debug/scripts/anyka_ipc.sh` | isto pokretanje, bez ispisa na konzolu i bez remountanja kartice |
| `usr/sbin/service.sh` | ostaje isti | njegova kuka pokrene `sd/debug/config.sh`, koji sve gore podmetne preko `mount -o bind` |

## Zašto kamera ne može van

- Sve što zove Yi oblak je zamijenjeno (tablica gore), pa veza ni ne počinje.
- Na kućnom Wi-Fiju kamera od routera uzme samo adresu. Gateway i DNS ignorira (`scripts/udhcpc.sh`), `/etc/resolv.conf` je prazan, a `scripts/watch.sh` briše default rutu ako je itko doda.
- Kad kamera radi vlastitu mrežu, u njoj nema gatewaya ni DNS-a.
- **http://ADRESA/status** pokazuje rute i DNS, pa se sve to može provjeriti.

Za dodatnu sigurnost internet za kameru može se blokirati i na routeru.

Nisu u repou: kopija flasha, raspakirani rootfs, ostatak dekompajliranog firmwarea i `wifi.conf` s lozinkama.
