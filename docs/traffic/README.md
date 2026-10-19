# Traffic check: the camera does not reach the internet

A traffic capture from 19 October 2026, from 21:45:39 (before the camera was powered on) to 21:54:58. The SD card ran localcam with recordings and FTP upload (switched off).

## Setup

- A laptop (Windows 10) ran a Wi-Fi hotspot that shared its own internet connection, network 192.168.137.0/24. The camera joined it as its home Wi-Fi (`HOME_SSID` in `wifi.conf`), so every packet it sent had to pass through the laptop.
- The traffic was captured with tshark on the hotspot interface (`Lokalna veza* 2`), with no filter, starting before the camera was powered on.
- In its DHCP offer the hotspot gave the camera the gateway 192.168.137.1 and the DNS server 192.168.137.1. A way to the internet existed and was offered to it.

During the capture the camera was powered on and `/status` was opened. In the browser, the page showed the live picture (HD), night vision and the light were used, and the motors got 49 commands. The list of recordings was fetched, one recording was downloaded and one was deleted.

## Result

| Check | Result |
|---|---|
| packets on the hotspot interface | 3422 |
| of these, involving the camera | 3397 (the other 25 come from the laptop: IGMP, MLD, WPAD queries, a NetBIOS announcement) |
| addresses the camera exchanged packets with | only 192.168.137.1 (the laptop) and DHCP broadcast |
| TCP connections the camera opened itself | **0** |
| UDP packets from the camera | 2 (DHCP Discover and Request) |
| packets from the camera to an address outside 192.168.137.0/24 (other than multicast and broadcast) | **0** |
| DNS, NTP | **0** |
| IPv6 | **0** |
| frames from the camera that are neither IPv4 nor ARP | **0** |

The camera received the offered gateway and DNS server, but did not take them:

```
1  0.000  0.0.0.0       → 255.255.255.255  DHCP Discover  (udhcp 1.24.1)
2  0.009  192.168.137.1 → 192.168.137.195  DHCP Offer     router 192.168.137.1, DNS 192.168.137.1
3  0.015  0.0.0.0       → 255.255.255.255  DHCP Request
4  0.021  192.168.137.1 → 192.168.137.195  DHCP ACK       router 192.168.137.1, DNS 192.168.137.1
```

`/status` from the same capture (packet 10 onward) shows this on the camera itself:

```
--- routes (a default route has Destination 00000000)
Iface  Destination  Gateway   Flags  ...  Mask
wlan0  0089A8C0     00000000  0001   ...  00FFFFFF    ← only 192.168.137.0/24, no default route
--- DNS servers (/etc/resolv.conf, should be empty)
                                                      ← empty
```

The only time the camera sent something on its own was one ARP request, for 192.168.137.1, when it had to answer the laptop's first request. All its TCP packets are replies on connections the laptop opened. Between requests the camera sent nothing, not even while recording to the SD card.

Why: `scripts/udhcpc.sh` takes only the address and netmask from DHCP, `/etc/resolv.conf` is empty, `scripts/watch.sh` deletes the default route if anything adds one, and everything that called the cloud has been replaced (main [README](../../README.md)). A program that still tried to get out would get "network unreachable" from the kernel before any packet exists, so such an attempt cannot show up in a capture at all.

## The file

[`kamera-hotspot.pcapng`](kamera-hotspot.pcapng) holds only the camera's packets (3397). Before publishing:

- the camera's MAC address was replaced with `02:00:00:00:00:01`, and the laptop's (the hotspot's) with `02:00:00:00:00:02`;
- the content was removed from the camera's replies to `/stream`, the downloaded recording, `/` and `jmuxer.min.js` (a picture of the yard, and the page is in the repo anyway). The headers remain and the packet lengths are the original ones, so Wireshark marks those packets "Packet size limited during capture". The other replies (`/status`, `/rec`, `/ptz`, …) are complete.

## How to check it

In Wireshark this display filter must give an empty list:

```
eth.src == 02:00:00:00:00:01 && ((ip && !(ip.dst == 192.168.137.0/24) && !(ip.dst == 224.0.0.0/4) && ip.dst != 255.255.255.255) || dns || ntp || ipv6)
```

Statistics → Conversations → IPv4 shows only 192.168.137.1 ↔ 192.168.137.195 and DHCP broadcast. The same from the command line:

```sh
tshark -r kamera-hotspot.pcapng -Y '<the filter above>' | wc -l    # 0
tshark -r kamera-hotspot.pcapng -q -z conv,ip
```

## Limitation

The capture covers nine minutes. Something that reported less often, say once a day, would not show up in it. That is covered by the permanent protections described above. For extra safety, the camera's internet access can also be blocked on the router by its MAC address.
