#!/bin/sh
# Brings up Wi-Fi on the RTL8188FU from debug/wifi.conf. Run in the
# background by config.sh; everything it writes goes to /tmp, not to flash.
#
# - HOME_SSID set: join that network as a client. The address comes from
#   DHCP, but scripts/udhcpc.sh ignores the router and DNS servers offered, so
#   the camera reaches only the local network.
# - Otherwise, or if joining fails: the camera's own network (access point) at
#   192.168.10.1, with DHCP for phones and again no gateway or DNS.
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
D=/mnt/debug
T=/tmp/localcam
AP_IP=192.168.10.1
cd /
mkdir -p $T

# The camera's busybox has no `tr`; strip Windows line endings with sed.
CR=$(printf '\r')
conf() { sed -n "s/^$1=//p" $D/wifi.conf | sed "s/$CR\$//" | head -n 1; }
HOME_SSID=$(conf HOME_SSID)
HOME_PASSWORD=$(conf HOME_PASSWORD)
AP_SSID=$(conf AP_SSID)
AP_PASSWORD=$(conf AP_PASSWORD)
AP_CHANNEL=$(conf AP_CHANNEL)
[ -n "$AP_SSID" ] || AP_SSID=Kamera
[ -n "$AP_CHANNEL" ] || AP_CHANNEL=6

say() { echo "net: $*"; echo "[localcam] net: $*" > /dev/console; }

# Power up and load the Wi-Fi driver (same steps as wifi_driver.sh station,
# which is disabled so anyka_ipc cannot restart the radio).
load_driver()
{
	[ -d /sys/class/net/wlan0 ] && return 0
	echo 1 > /sys/user-gpio/wifi_en
	sleep 3
	insmod /usr/modules/otg-hs.ko
	sleep 2
	echo 0 > /sys/user-gpio/wifi_en	# rtl8188ftv: 0 = power on
	sleep 3
	# rtw_power_mgnt=0: no Wi-Fi power saving (it costs throughput and latency)
	insmod /usr/modules/rtl8188fu.ko rtw_power_mgnt=0
	i=0
	while [ ! -d /sys/class/net/wlan0 ] && [ $i -lt 15 ]; do
		sleep 1
		i=$((i + 1))
	done
	[ -d /sys/class/net/wlan0 ]
}

start_home()
{
	# wpa_passphrase copes with any characters in the name and password;
	# drop the comment line that repeats the password in plain text.
	{
		echo "ctrl_interface=/var/run/wpa_supplicant"
		wpa_passphrase "$HOME_SSID" "$HOME_PASSWORD" | grep -v '#psk='
	} > $T/wpa.conf
	mkdir -p /var/run/wpa_supplicant
	ifconfig wlan0 up
	wpa_supplicant -B -iwlan0 -Dwext -c $T/wpa.conf
	i=0
	until wpa_cli -i wlan0 status 2>/dev/null | grep -q "wpa_state=COMPLETED"; do
		i=$((i + 1))
		if [ $i -gt 30 ]; then
			# SCANNING = network not seen; 4WAY_HANDSHAKE/DISCONNECTED after
			# seeing it usually means a wrong password.
			say "could not join \"$HOME_SSID\": $(wpa_cli -i wlan0 status 2>/dev/null | grep '^wpa_state=')"
			wpa_cli -i wlan0 scan > /dev/null 2>&1
			sleep 5
			say "networks the camera can see (2.4 GHz only):"
			wpa_cli -i wlan0 scan_results 2>/dev/null | sed -n '2,16p' |
				while read bssid freq level flags ssid; do
					say "  \"$ssid\"  $freq MHz  $level dBm"
				done
			killall wpa_supplicant
			return 1
		fi
		sleep 2
	done
	# Realtek power saving adds hundreds of ms of delay and drops packets.
	iwconfig wlan0 power off 2>/dev/null
	rm -f $T/ip
	udhcpc -i wlan0 -s $T/scripts/udhcpc.sh -b -p $T/udhcpc.pid -t 10 -T 3
	i=0
	until [ -s $T/ip ]; do
		i=$((i + 1))
		if [ $i -gt 30 ]; then
			say "joined \"$HOME_SSID\" but got no address from DHCP"
			killall udhcpc wpa_supplicant
			return 1
		fi
		sleep 1
	done
	say "home Wi-Fi \"$HOME_SSID\", camera at http://$(cat $T/ip)/ (no internet: no gateway, no DNS)"
}

start_ap()
{
	if [ ${#AP_PASSWORD} -lt 8 ] || [ ${#AP_PASSWORD} -gt 63 ]; then
		say "AP_PASSWORD in wifi.conf must have 8-63 characters, access point not started"
		return 1
	fi
	cat > $T/hostapd.conf <<EOF
interface=wlan0
driver=rtl871xdrv
ctrl_interface=/var/run/hostapd
ssid=$AP_SSID
channel=$AP_CHANNEL
hw_mode=g
ieee80211n=1
wme_enabled=1
ht_capab=[SHORT-GI-20]
beacon_int=100
max_num_sta=4
wpa=2
wpa_key_mgmt=WPA-PSK
rsn_pairwise=CCMP
wpa_passphrase=$AP_PASSWORD
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
	ifconfig wlan0 down	# in case a failed home Wi-Fi attempt left it in client mode
	ifconfig wlan0 up
	hostapd $T/hostapd.conf -B
	ifconfig wlan0 $AP_IP netmask 255.255.255.0
	udhcpd $T/udhcpd.conf
	echo $AP_IP > $T/ip
	say "own network \"$AP_SSID\" on channel $AP_CHANNEL, camera at http://$AP_IP/"
}

if ! load_driver; then
	say "wlan0 did not appear, Wi-Fi driver failed"
	exit 1
fi
if [ -n "$HOME_SSID" ] && start_home; then
	exit 0
fi
[ -n "$HOME_SSID" ] && say "falling back to the camera's own network"
start_ap
