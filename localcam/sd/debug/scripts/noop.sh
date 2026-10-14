#!/bin/sh
# Mounted by config.sh over the firmware's Wi-Fi and update scripts
# (wifi_manage.sh, wifi_station.sh, wifi_driver.sh, ...). anyka_ipc calls them
# to search for its saved network and to restart the radio every two minutes;
# that would tear down the access point, so these calls now do nothing.
exit 0
