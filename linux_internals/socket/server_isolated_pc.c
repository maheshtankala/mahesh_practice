// server.c — runs on PC 1
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main() {
    char buf[1024];

    // Step 1: Create socket
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("Socket created\n");

    // Step 2: Fill address
    struct sockaddr_in server_address;
    server_address.sin_family      = AF_INET;
    server_address.sin_port        = htons(8080);
    server_address.sin_addr.s_addr = INADDR_ANY;
    //                               ↑
    //                    accepts from ANY IP
    //                    so client from PC2 can connect ✅

    // Step 3: Bind
    bind(server_fd, (struct sockaddr*)&server_address, sizeof(server_address));
    printf("Bound to port 8080\n");

    // Step 4: Listen
    listen(server_fd, 5);
    printf("Waiting for client...\n");

    // Step 5: Accept
    int client_fd = accept(server_fd, NULL, NULL);
    printf("Client connected!\n");

    // Step 6: Receive
    int n = recv(client_fd, buf, sizeof(buf), 0);
    buf[n] = '\0';
    printf("Server received: %s\n", buf);

    // Step 7: Send reply
    send(client_fd, "Hello from Server PC!", 21, 0);
    printf("Reply sent!\n");

    // Step 8: Close
    close(client_fd);
    close(server_fd);
    return 0;
}
