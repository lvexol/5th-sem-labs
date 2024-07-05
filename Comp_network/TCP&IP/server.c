#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

#define MAX 80
#define PORT 8080

void chat(int connfd) {
    char buff[MAX];
    while (1) {
        memset(buff, 0, MAX); // Clear buffer
        read(connfd, buff, sizeof(buff)); // Read message from client
        printf("From client: %s To client: ", buff);

        fgets(buff, MAX, stdin); // Read message from server input
        write(connfd, buff, strlen(buff)); // Send message to client

        if (strncmp("exit", buff, 4) == 0) {
            printf("Server Exit...\n");
            break;
        }
    }
}

int main() {
    int sockfd, connfd;
    struct sockaddr_in servaddr, cli;
    socklen_t len;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        printf("Socket creation failed...\n");
        exit(0);
    }
    printf("Socket successfully created..\n");

    memset(&servaddr, 0, sizeof(servaddr)); // Clear structure
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(PORT);

    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        printf("Socket bind failed...\n");
        exit(0);
    }
    printf("Socket successfully binded..\n");

    if (listen(sockfd, 5) != 0) {
        printf("Listen failed...\n");
        exit(0);
    }
    printf("Server listening..\n");

    len = sizeof(cli);
    connfd = accept(sockfd, (struct sockaddr*)&cli, &len);
    if (connfd < 0) {
        printf("Server accept failed...\n");
        exit(0);
    }
    printf("Server accepted the client..\n");

    chat(connfd); // Start chat

    close(sockfd); // Close the socket
}