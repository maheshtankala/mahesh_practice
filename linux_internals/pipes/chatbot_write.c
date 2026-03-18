#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(){
        mkfifo("mypipe",0666);
        int fd=open("mypipe",O_WRONLY);
        char msg[100];
	printf("Enter the message:");
	fgets(msg,sizeof(msg),stdin);
        write(fd,msg,strlen(msg)+1);
        printf("Message sent!\n");
        close(fd);
	unlink("mypipe");
        return 0;
}

