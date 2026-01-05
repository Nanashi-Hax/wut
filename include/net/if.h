#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define IFNAMSIZ 16

struct ifreq
{
    char ifr_name[IFNAMSIZ];
};

unsigned int if_nametoindex(const char *ifname);
char *if_indextoname(unsigned int ifindex, char *ifname);

#ifdef __cplusplus
}
#endif
