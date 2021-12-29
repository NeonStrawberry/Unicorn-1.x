#include <stdlib.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/sockets.h>
#include <sys/socket.h>
#include <unistd.h>

#include "headers/httph.h"

#define PORT 80

#define DIR "/var/www/html"
#define LOGFILE ""

int logfd;

void handle(int fd) {
    
}
