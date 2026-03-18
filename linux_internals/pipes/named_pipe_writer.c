#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(){
	mkfifo("mypipe",0666);
	int fd=open("mypipe",O_WRONLY);
	char *msg="Hello via named pipe!";
	write(fd,msg,strlen(msg)+1);
	printf("Writer send :%s\n",msg);
	close(fd);
	return 0;
}


