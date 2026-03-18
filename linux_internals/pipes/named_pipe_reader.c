#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
	int fd=open("mypipe",O_RDONLY);
	char buf[100];
	read(fd,buf,sizeof(buf));
	printf("Reader received :%s\n",buf);
	close(fd);
	return 0;
}

