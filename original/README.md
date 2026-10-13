# Originalni firmware: dijelovi koji idu prema oblaku

Dijelovi originalnog firmwarea kamere (Yi/Kami, Anyka AK3918) koje `localcam` zamjenjuje ili gasi. Ovdje su da se vidi što kamera radi bez izmjena i da se može usporediti sa zamjenom. Putanje su iste kao na kameri.

- `usr/lib/*.c` i `usr/bin/cloudAPI.c` su dekompajlirani Ghidrom 12.1 (izvoz u C, uz `.h` s tipovima). To nije izvorni kod proizvođača i ne može se prevesti natrag. Imena poput `FUN_0001a2b4` i `param_1` dala je Ghidra. Ugrađeni ključevi za P2P i za uparivanje preko AP-a zamijenjeni su s `IZBACENO`.
- `usr/sbin/*.sh` su originalne skripte, neizmijenjene.

| Original | Što radi | Kamo se spaja |
|---|---|---|
| `usr/lib/libYiP2P.so` | prijenos uživo i snimki u Yi aplikaciju preko Yi P2P servera | `tnpmastercn.xiaoyi.com`, `hch.xiaoyi.com:8443` |
| `usr/lib/liboss.so` | slanje snimki i slika u oblak | Aliyun OSS (`aliyuncs.com`), Azure Blob (`blob.core.windows.net`) |
| `usr/lib/libcloudapi.so` | Yi cloud API: prijava, bindkey, regija, provjera i skidanje updatea, eventi, uparivanje preko AP-a | `yicamera-router.mi-ae.com.sg` |
| `usr/bin/cloudAPI` | Yi web API kao zaseban program; `anyka_ipc` ga pokreće za prijavu, vrijeme, bindkey i evente | fiksne IP adrese (većinom Alibaba Cloud), `openapi.kuaipan.cn`, DNS 8.8.8.8 i 202.96.209.133 |
| `usr/sbin/wifi_manage.sh`, `wifi_station.sh`, `wifi_driver.sh`, `wifi_run.sh`, `eth_manage.sh`, `ap.sh`, `wifi_ap.sh` | mreža: spajanje na spremljeni Wi-Fi, AP za uparivanje; `anyka_ipc` ih poziva i restarta radio dok ne nađe mrežu | |
| `usr/sbin/update.sh` | update firmwarea s kartice ili preko mreže (OTA) | |
| `usr/sbin/anyka_ipc.sh` | pokretanje i gašenje `anyka_ipc` | |
| `usr/sbin/service.sh` | pokretanje pri bootu; ako na kartici postoji mapa `debug`, pokrene `/mnt/debug/config.sh` | |

Oblak pokreće `anyka_ipc` u funkciji `ak_yi_init` (`yi_cloud_init`, `yi_oss_init`, `start_p2p`). Sam `anyka_ipc` se ne mijenja.
