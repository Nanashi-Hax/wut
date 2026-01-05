#include "wut_socket.h"

ssize_t writev(int sockfd, const struct iovec *iov, int iovcnt)
{
    int rc;

    if (!iov || iovcnt <= 0)
    {
        errno = EINVAL;
        return -1;
    }

    sockfd = __wut_get_nsysnet_fd(sockfd);
    if (sockfd == -1)
    {
        return -1;
    }

    rc = RPLWRAP(sendto_multi)( sockfd, NULL, 0, 0, iov, iovcnt);

    return __wut_get_nsysnet_result(NULL, rc);
}
