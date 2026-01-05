#pragma once
#include <stddef.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

struct iovec
{
    void*  iov_base;
    size_t iov_len;
};

ssize_t readv(int sockfd, struct iovec *iov, int iovcnt);
ssize_t writev(int sockfd, const struct iovec *iov, int iovcnt);

#ifdef __cplusplus
}
#endif
