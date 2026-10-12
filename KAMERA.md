# Yi kamera (Anyka AK3918): serijska konzola i kopiranje flasha

## 1. Spajanje žica

Tri pada na pločici kamere:

| Pad na kameri              | Pin adaptera (CH341) |
|----------------------------|----------------------|
| lijevi                     | GND                  |
| srednji (TX kamere)        | **RX**               |
| desni, kockasti (RX kamere)| **TX**               |

- 3.3V pin adaptera **ne spajati**, kamera ima svoje napajanje.
- Adapter radi na 3.3V (izmjereno na TX i RX).
- Postavke porta: **COM4, 115200, 8N1**.

## 2. Spajanje na konzolu

Iz WSL terminala (bash), s filterom koji skriva spam:

```sh
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "$(wslpath -w ~/reverse_engineer_camera/serial.ps1)"
```

Bez filtera, kad treba vidjeti baš sve (npr. boot log):

```sh
powershell.exe -NoProfile -Command '$p=New-Object System.IO.Ports.SerialPort COM4,115200,None,8,One; $p.Open(); try { while($true){ $d=$p.ReadExisting(); if($d){[Console]::Write($d)}; while([Console]::KeyAvailable){ $k=[Console]::ReadKey($true); $p.Write([string]$k.KeyChar) }; Start-Sleep -m 20 } } finally { $p.Close() }'
```

Izlaz: Ctrl+C.

- Shell je `[root@anyka ~]$`, root, bez lozinke.
- Naredbu upiši i stisni Enter **i kad spam leti preko ekrana**. Shell je prima.
- U jednom trenutku COM4 može koristiti samo jedan program. Ako dobiješ `Access to the port 'COM4' is denied`, negdje je otvoren drugi prozor ili skripta.
- Ako se port ne oslobađa ni kad zatvoriš sve prozore, izvuci USB adapter i vrati ga.

## 3. Odakle spam i zašto se ne može ugasiti

- Spam dolazi od glavne aplikacije `anyka_ipc` i wifi skripti (`wifi_station.sh`, `wifi_run.sh`). Sve ih pokreće to što kamera ne nalazi spremljenu wifi mrežu.
- `daemon` drži hardverski watchdog (8 s). **Ne gasiti ga**, jer se kamera tada resetira.
- Pauziranje `anyka_ipc` (`kill -STOP`) utiša kameru, ali je `daemon` nakon 1 do 2 minute resetira. Zato se spam skriva na strani računala, u `serial.ps1`.

## 4. Kopiranje flasha na microSD karticu

Stavi praznu microSD karticu (**FAT32 ili exFAT**, kernel kamere podržava oboje) u kameru, pa u konzoli:

```sh
mount | grep mmc            # kamera karticu sama NE montira, pa obično treba:
mount /dev/mmcblk0p1 /mnt   # za exFAT eventualno: mount -t exfat /dev/mmcblk0p1 /mnt
```

Kad se kartica montira, `anyka_ipc` na njoj napravi mape `tmp/` i `record/` i može početi snimati video. To je normalno.

Kopiranje (ako kartica nije na `/mnt`, promijeni `D`):

```sh
D=/mnt/dump; mkdir -p $D
cat /proc/mtd > $D/mtd.txt
for m in /dev/mtdblock*; do cat $m > $D/${m##*/}.bin; done
tar -cf $D/jffs2.tar /etc/jffs2
md5sum /dev/mtdblock* > $D/md5.txt
sync
ls -l $D                    # veličine .bin = veličine iz mtd.txt (tamo su heksadecimalno)
```

Vađenje kartice: `umount /mnt`. Ako javi "busy" (kamera snima na karticu), napravi `sync`,
**isključi napajanje kamere**, pa tek onda izvadi karticu. Ne vadi je dok kamera radi.

## 5. Na računalu

Stavi karticu u čitač. Ako se ne pojavi kao disk, Windows joj nije dodijelio slovo:
Win+X → Upravljanje diskovima → desni klik na particiju kartice → "Promijeni slovo pogona i putanje" → Dodaj.

Primjer je za disk `E:`, slovo promijeni po potrebi:

```sh
cp -r /mnt/e/dump ~/reverse_engineer_camera/
```

Bez slova pogona karticu se može čitati i preko Volume putanje (PowerShell):
`Get-Volume | Where DriveType -eq Removable` pokaže `\\?\Volume{...}\`, a
`Copy-Item -LiteralPath '\\?\Volume{...}\dump\*' -Destination ...` kopira.

Provjera da je kopiranje dobro prošlo, pomoću `files.md5`, koji je izračunala kamera:

```sh
cd ~/reverse_engineer_camera/dump && sed 's#/mnt/dump/##' files.md5 | tr -d '\r' | md5sum -c -
```

Raspakiravanje u jedno stablo kakvo je na kameri (A = `/`, B = `/usr`, C = `/etc/jffs2`):

```sh
cd ~/reverse_engineer_camera
unsquashfs -no-xattrs -d rootfs dump/mtdblock4.bin
unsquashfs -no-xattrs -f -d rootfs/usr dump/mtdblock5.bin
tar -xf dump/jffs2.tar -C rootfs
```

## Particije flasha

| mtd | Ime    | Veličina | Sadržaj                                    |
|-----|--------|----------|--------------------------------------------|
| 0   | spi0.0 | 8 MB     | cijeli čip (uključuje i U-Boot)            |
| 1   | KERNEL | 1.5 MB   | uImage, Linux 3.4.35                       |
| 2   | MAC    | 4 KB     | MAC adresa                                 |
| 3   | ENV    | 4 KB     | U-Boot varijable                           |
| 4   | A      | 1 MB     | rootfs `/`, squashfs (xz)                  |
| 5   | B      | 4.5 MB   | `/usr`, squashfs (xz), aplikacije          |
| 6   | C      | 700 KB   | `/etc/jffs2`, jffs2, postavke (zapisivo)   |

Particija C se stalno mijenja dok kamera radi, pa se njezin md5 (i md5 od mtd0) ne poklapa između dva čitanja.

## Korisno znati

- Rootfs je `mtdblock4` (squashfs, samo za čitanje). Zapisivi dio je `/etc/jffs2` (`mtdblock6`), gdje su postavke, wifi i ISP konfiguracija.
- Cijeli flash ima 8 MB. Kernel je Linux 3.4.35, U-Boot 2013.10.
- `/bin/telnetd` postoji, ali ne radi. Na portu 21 radi FTP (`tcpsvd ... ftpd`), ali kamera nije na mreži.
- Boot log sadrži wifi lozinku i Yi bindkey u čistom tekstu. **Logove ne objavljivati.**
- Smeće (čudni znakovi) u ispisu znači loš kontakt, najčešće GND ili lem na srednjem padu.
