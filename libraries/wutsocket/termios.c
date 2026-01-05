#include <sys/termios.h>
#include <errno.h>

int tcgetattr(int fd, struct termios *termios_p)
{
    (void)fd;
    (void)termios_p;
    errno = ENOTTY;
    return -1;
}

int tcsetattr(int fd, int optional_actions, const struct termios *termios_p)
{
    (void)fd;
    (void)optional_actions;
    (void)termios_p;
    errno = ENOTTY;
    return -1;
}

speed_t cfgetispeed(const struct termios *termios_p)
{
    (void)termios_p;
    return 0;
}

speed_t cfgetospeed(const struct termios *termios_p)
{
    (void)termios_p;
    return 0;
}

int cfsetispeed(struct termios *termios_p, speed_t speed)
{
    (void)termios_p;
    (void)speed;
    return 0;
}

int cfsetospeed(struct termios *termios_p, speed_t speed)
{
    (void)termios_p;
    (void)speed;
    return 0;
}
