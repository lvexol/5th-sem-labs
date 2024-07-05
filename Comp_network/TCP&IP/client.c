#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#define MAX 80
#define PORT 8080
#define SA struct sockaddr

void chat(int sockfd) {
    char buff[MAX];
    while (1) {
        printf("Enter the string: ");
        fgets(buff, MAX, stdin); // Use fgets instead of getchar loop
        write(sockfd, buff, strlen(buff)); // Send only the entered string length

        memset(buff, 0, MAX); // Clear buffer
        read(sockfd, buff, MAX); // Read server response
        printf("From Server: %s", buff);

        if (strncmp(buff, "exit", 4) == 0) {
            printf("Client Exit...\n");
            break;
        }
    }
}

int main() {
    int sockfd;
    struct sockaddr_in servaddr;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        printf("Socket creation failed...\n");
        exit(0);
    }
    printf("Socket successfully created..\n");

    memset(&servaddr, 0, sizeof(servaddr)); // Clear structure
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    servaddr.sin_port = htons(PORT);

    if (connect(sockfd, (SA*)&servaddr, sizeof(servaddr)) != 0) {
        printf("Connection with the server failed...\n");
        exit(0);
    }
    printf("Connected to the server..\n");

    chat(sockfd); // Simplified function name

    close(sockfd);
}