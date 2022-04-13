#include <time.h>
#include <poll.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <linux/sockios.h>
#include <linux/net_tstamp.h>

#define BUFFER_LEN 256
#define HW_FLAG 1

void die(const char *s);

int setup_receiver(int fd, const int port);
int setup_sender(int fd);
int setup_adapter(int fd, const char *dev_name);
void send_single(int fd, const char *address, const int port);
void recv_single(int fd);