#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<netinet/in.h>


int main(){
	int sockfd=socket(AF_INET,SOCK_STREAM,0);


	struct sockaddr_in addr;
	addr.sin_family=AF_INET;
	addr.sin_port=htons(8080);
	addr.sin_addr.s_addr=INADDR_ANY;
	bind(sockfd,(struct sockaddr*)&addr,sizeof(addr));


	listen(sockfd,5);
	printf("Server listening on port 8080...\n");


	int clientfd=accept(sockfd,NULL,NULL);
	printf("Client connected!\n");


	char buf[1024];
	int n=recv(clientfd,buf,sizeof(buf),0);
	buf[n]='\0';


	printf("Server received:%s\n",buf);

	send(clientfd,"Hello from server!",18,0);

	close(clientfd);
	close(sockfd);
	return 0;
}
