/*
 * Preloaded (LD_PRELOAD) into daemon and anyka_ipc when CLOSE_PORTS=1 in
 * sd/debug/config.sh. Their factory test and tuning tool servers listen on
 * every interface; a bind() of one of these ports to 0.0.0.0 becomes a bind
 * to 127.0.0.1, so the programs run as before but nothing on the network can
 * reach the ports:
 *
 *   TCP 6789  daemon: factory test, runs programs from /tmp as root
 *   TCP 6790  daemon: its heartbeat, opened once something connects to 6789
 *   UDP 8192  daemon: answers "Anyka IPC ,Get IP Address!" with name, IP, MAC
 *   TCP 8000  anyka_ipc: ISP tuning tool, after the local command "its,1"
 *   TCP 8012  anyka_ipc: audio tuning tool, after "ats,1"
 *
 * daemon cannot simply be stopped instead: it feeds the hardware watchdog,
 * restarts anyka_ipc when it dies and handles the reset button.
 *
 * The real bind() is the system call itself, not dlsym(RTLD_NEXT): nothing to
 * look up, so it cannot fail, and every other bind (the web server on port
 * 80, DHCP) goes through unchanged.
 */
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/syscall.h>
#include <unistd.h>

static const unsigned short local_only[] = { 6789, 6790, 8192, 8000, 8012 };

int bind(int fd, const struct sockaddr *addr, socklen_t len)
{
	struct sockaddr_in in;
	unsigned i;

	if (addr && addr->sa_family == AF_INET && len >= sizeof(in)) {
		memcpy(&in, addr, sizeof(in));
		for (i = 0; i < sizeof(local_only) / sizeof(local_only[0]); i++) {
			if (in.sin_addr.s_addr == htonl(INADDR_ANY) && in.sin_port == htons(local_only[i])) {
				in.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
				return syscall(SYS_bind, fd, &in, sizeof(in));
			}
		}
	}
	return syscall(SYS_bind, fd, addr, len);
}
