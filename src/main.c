#include <stdlib.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/sockets.h>
#include <sys/socket.h>
#include <unistd.h>

#include "headers/httph.h"

#define PORT 8089

#define DIR "www/html"
#define LOGFILE "www/logfile.txt"

int logfd;

void handle(int fd) {
    httph(fd);
}

int main() {
    
}
