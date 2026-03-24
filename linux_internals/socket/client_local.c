#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

int main(){
	int sockfd=socket(AF_INET,SOCK_STREAM,0);


	struct sockaddr_in server;
	server.sin_family=AF_INET;
	server.sin_port=htons(8080);
	inet_pton(AF_INET, "127.0.0.1", &server.sin_addr);
	connect(sockfd, (struct sockaddr*)&server, sizeof(server));
	printf("Connected to server!\n");
	send(sockfd,"Hello from client!",18,0);
	printf("Message sent!\n");


	char buf[1024];
	int n=recv(sockfd,buf,sizeof(buf),0);
	buf[n] = '\0';
	printf("Client received: %s\n", buf);
	close(sockfd);
	return 0;
}





