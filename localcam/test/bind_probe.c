/*
 * Test for libbindguard.so (see test/run_test.sh). Preloaded into busybox
 * after it, so its bind() calls go through bindguard's: binds the ports that
 * must stay local and a few that must be left alone, prints where each socket
 * ended up ("tcp 0.0.0.0:6789 -> 127.0.0.1:6789") and exits.
 */
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

static void probe(int type, const char *ip, int port)
{
	struct sockaddr_in a;
	socklen_t len = sizeof(a);
	char line[96];
	int fd = socket(AF_INET, type, 0), n;

	memset(&a, 0, sizeof(a));
	a.sin_family = AF_INET;
	a.sin_port = htons(port);
	inet_aton(ip, &a.sin_addr);
	n = snprintf(line, sizeof(line), "%s %s:%d -> ", type == SOCK_STREAM ? "tcp" : "udp", ip, port);
	if (fd < 0 || bind(fd, (struct sockaddr *)&a, sizeof(a)) < 0 ||
	    getsockname(fd, (struct sockaddr *)&a, &len) < 0)
		n += snprintf(line + n, sizeof(line) - n, "failed\n");
	else
		n += snprintf(line + n, sizeof(line) - n, "%s:%d\n", inet_ntoa(a.sin_addr), ntohs(a.sin_port));
	write(1, line, n);
	/* fd stays open: the next probes must not get the same port by chance. */
}

__attribute__((constructor)) static void run(void)
{
	probe(SOCK_STREAM, "0.0.0.0", 6789);
	probe(SOCK_STREAM, "0.0.0.0", 6790);
	probe(SOCK_DGRAM, "0.0.0.0", 8192);
	probe(SOCK_STREAM, "0.0.0.0", 8000);
	probe(SOCK_STREAM, "0.0.0.0", 8012);
	/* left alone: other ports, an explicit address, port 0 */
	probe(SOCK_STREAM, "0.0.0.0", 18080);
	probe(SOCK_DGRAM, "0.0.0.0", 18192);
	probe(SOCK_STREAM, "127.0.0.2", 8001);
	probe(SOCK_STREAM, "0.0.0.0", 0);
	_exit(0);
}
