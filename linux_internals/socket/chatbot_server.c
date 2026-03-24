#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main() {
    int server_fd, client_fd;
    char send_buf[1024], recv_buf[1024];

    // Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    bind(server_fd, (struct sockaddr*)&server_addr, sizeof(server_addr));
    listen(server_fd, 5);

    printf("Waiting for client...\n");
    client_fd = accept(server_fd, NULL, NULL);
    printf("Client connected!\n");

    while (1) {
        // Receive from client
        int n = recv(client_fd, recv_buf, sizeof(recv_buf), 0);
        recv_buf[n] = '\0';
        printf("Client: %s\n", recv_buf);

        if (strcmp(recv_buf, "bye") == 0)
            break;

        // Send reply
        printf("Server: ");
        fgets(send_buf, sizeof(send_buf), stdin);
        send(client_fd, send_buf, strlen(send_buf), 0);

        if (strncmp(send_buf, "bye", 3) == 0)
            break;
    }

    close(client_fd);
    close(server_fd);
    return 0;
}
