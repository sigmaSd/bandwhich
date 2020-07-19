#include <ifaddrs.h>

int main(int argc, char *argv[])
{
	struct ifaddrs *ifaddr, *ifa;
	int family, s;

	if (getifaddrs(&ifaddr) == -1) {
	    perror("getifaddrs");
	    exit(1);
    }
    printf("%d", ifaddr->ifa_addr->sa_family);
	return 0;
}