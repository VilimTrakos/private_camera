#!/bin/sh
# udhcpc event script for home Wi-Fi (scripts/net_start.sh). Takes the
# address and netmask, and deliberately ignores the router and DNS servers the
# DHCP server offers: with no default route and no DNS, the camera can reach
# only its own subnet.
PATH=$PATH:/bin:/sbin:/usr/bin:/usr/sbin
case "$1" in
deconfig)
	ifconfig $interface 0.0.0.0
	;;
bound | renew)
	ifconfig $interface $ip netmask ${subnet:-255.255.255.0}
	[ "$(cat /tmp/localcam/ip 2>/dev/null)" = "$ip" ] ||
		echo "[localcam] $(date +%T) home Wi-Fi address $ip" > /dev/console
	echo $ip > /tmp/localcam/ip
	;;
esac
exit 0
