// client.c — runs on PC 2
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main() {
    char buf[1024];

    // Step 1: Create socket
    int client_fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("Socket created\n");

    // Step 2: Fill server address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port   = htons(8080);
    inet_pton(AF_INET, "192.168.1.5", &server_address.sin_addr);
    //                   ↑
    //          CHANGE THIS to server PC's IP address
    //          replace 127.0.0.1 with actual server IP

    // Step 3: Connect to server
    connect(client_fd, (struct sockaddr*)&server_address, sizeof(server_address));
    printf("Connected to server!\n");

    // Step 4: Send message
    send(client_fd, "Hello from Client PC!", 21, 0);
    printf("Message sent!\n");

    // Step 5: Receive reply
    int n = recv(client_fd, buf, sizeof(buf), 0);
    buf[n] = '\0';
    printf("Client received: %s\n", buf);

    // Step 6: Close
    close(client_fd);
    return 0;
}
