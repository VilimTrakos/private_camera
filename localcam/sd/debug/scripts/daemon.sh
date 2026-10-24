#!/bin/sh
# Stand-in for /usr/bin/daemon (CLOSE_PORTS in config.sh): starts the original,
# copied to RAM by config.sh, with lib/libbindguard.so preloaded, so its
# factory test (TCP 6789, 6790) and discovery (UDP 8192) listen only on
# 127.0.0.1. Everything else daemon does (watchdog, reset button, restarting
# anyka_ipc) works as before.
T=/tmp/localcam
LD_PRELOAD=$T/lib/libbindguard.so
export LD_PRELOAD
exec $T/orig/daemon "$@"
