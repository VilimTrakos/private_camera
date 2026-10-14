#!/bin/sh
# Brings up the camera's own Wi-Fi network on the RTL8188FU, like the
# firmware's ap.sh, but from SD-card settings and without writing to flash.
# The camera is 192.168.10.1 and hands out addresses with DHCP. No gateway and
# no DNS are offered, so a phone keeps using mobile data for the internet and
# nothing on the camera has a route out. Run in the background by config.sh.
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
D=/mnt/debug
T=/tmp/localcam
IP=192.168.10.1
mkdir -p $T

# The camera's busybox has no `tr`; strip Windows line endings with sed.
CR=$(printf '\r')
conf() { sed -n "s/^$1=//p" $D/ap.conf | sed "s/$CR\$//" | head -n 1; }
SSID=$(conf SSID)
PASS=$(conf PASSWORD)
CHANNEL=$(conf CHANNEL)
[ -n "$SSID" ] || SSID=Kamera
[ -n "$CHANNEL" ] || CHANNEL=6
if [ ${#PASS} -lt 8 ] || [ ${#PASS} -gt 63 ]; then
	echo "ap: PASSWORD in ap.conf must have 8-63 characters, access point not started"
	exit 1
fi

cat > $T/hostapd.conf <<EOF
interface=wlan0
driver=rtl871xdrv
ctrl_interface=/var/run/hostapd
ssid=$SSID
channel=$CHANNEL
hw_mode=g
ieee80211n=1
wme_enabled=1
ht_capab=[SHORT-GI-20]
beacon_int=100
max_num_sta=4
wpa=2
wpa_key_mgmt=WPA-PSK
rsn_pairwise=CCMP
wpa_passphrase=$PASS
EOF

cat > $T/udhcpd.conf <<EOF
start 192.168.10.20
end 192.168.10.50
interface wlan0
option subnet 255.255.255.0
option lease 86400
lease_file $T/udhcpd.leases
pidfile $T/udhcpd.pid
EOF
touch $T/udhcpd.leases

# Power up and load the Wi-Fi driver (same steps as wifi_driver.sh station,
# which is disabled now so anyka_ipc cannot restart the radio).
if [ ! -d /sys/class/net/wlan0 ]; then
	echo 1 > /sys/user-gpio/wifi_en
	sleep 3
	insmod /usr/modules/otg-hs.ko
	sleep 2
	echo 0 > /sys/user-gpio/wifi_en	# rtl8188ftv: 0 = power on
	sleep 3
	insmod /usr/modules/rtl8188fu.ko
	i=0
	while [ ! -d /sys/class/net/wlan0 ] && [ $i -lt 15 ]; do
		sleep 1
		i=$((i + 1))
	done
fi
if [ ! -d /sys/class/net/wlan0 ]; then
	echo "ap: wlan0 did not appear, Wi-Fi driver failed"
	exit 1
fi

ifconfig wlan0 up
hostapd $T/hostapd.conf -B
ifconfig wlan0 $IP netmask 255.255.255.0
udhcpd $T/udhcpd.conf
echo "ap: network \"$SSID\" on channel $CHANNEL, camera at http://$IP/"
