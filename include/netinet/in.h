#pragma once
#include <stdint.h>
#include <sys/socket.h>

#define INADDR_ANY         0x00000000
#define INADDR_LOOPBACK    0x7F000001
#define INADDR_BROADCAST   0xFFFFFFFF
#define INADDR_NONE        0xFFFFFFFF

#define INET_ADDRSTRLEN    16

#define IPPROTO_IP         0
#define IPPROTO_ICMP       1
#define IPPROTO_TCP        6
#define IPPROTO_UDP        17
#define IPPROTO_IPV6       41
#define IPPROTO_ICMPV6     58

#define IP_TOS             3
#define IP_TTL             4
#define IP_MULTICAST_IF    9
#define IP_MULTICAST_TTL   10
#define IP_MULTICAST_LOOP  11
#define IP_ADD_MEMBERSHIP  12
#define IP_DROP_MEMBERSHIP 13
#define IP_UNKNOWN         14

#define AF_INET6 10
#define PF_INET6 10

#define IPV6_JOIN_GROUP 12
#define IPV6_LEAVE_GROUP 13
#define IPV6_UNICAST_HOPS 16
#define IPV6_MULTICAST_IF 17
#define IPV6_MULTICAST_HOPS 18
#define IPV6_MULTICAST_LOOP 19

typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;

struct in_addr
{
   in_addr_t s_addr;
};

struct sockaddr_in
{
   sa_family_t sin_family;
   in_port_t sin_port;
   struct in_addr sin_addr;
   unsigned char sin_zero[8];
};

struct ip_mreq
{
   struct in_addr imr_multiaddr;
   struct in_addr imr_interface;
};

struct in6_addr {
    unsigned char s6_addr[16];
};

struct sockaddr_in6 {
    uint16_t sin6_family;
    uint16_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
};

struct ipv6_mreq {
    struct in6_addr ipv6mr_multiaddr;
    unsigned int    ipv6mr_interface;
};
