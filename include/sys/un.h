#pragma once

#include <sys/socket.h>

#ifdef __cplusplus
extern "C" {
#endif

#define AF_UNIX 1
#define AF_LOCAL AF_UNIX

struct sockaddr_un
{
    sa_family_t sun_family;
    char sun_path[108];
};

#ifdef __cplusplus
}
#endif
