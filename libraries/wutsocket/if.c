#include <net/if.h>
#include <string.h>

unsigned int if_nametoindex(const char *ifname)
{
    (void)ifname;
    return 1; // 唯一のインターフェース
}

char *if_indextoname(unsigned int ifindex, char *ifname)
{
    if (!ifname) return 0;
    if (ifindex != 1) return 0;
    strcpy(ifname, "wiiu0");
    return ifname;
}
