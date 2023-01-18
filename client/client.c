#include <stdio.h>
#include<stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>

int PORT;

bool validate_email();
bool authenticate();
bool create_account();
bool logout();
bool send_email();
void inbox();

int main () {
    return 0;
}