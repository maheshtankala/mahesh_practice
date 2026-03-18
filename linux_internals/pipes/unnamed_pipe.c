#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main(){
	int fd[2];
	char buf[50];
	char *msg="Hello from parent!";
	pipe(fd);


	if(fork()==0){
		close(fd[1]);
		read(fd[0],buf,sizeof(buf));
		printf("Child received : %s\n",buf);
		close(fd[0]);
	}
	else{
		close(fd[0]);
		write(fd[1],msg,strlen(msg)+1);
		printf("Parent sent : %s\n",msg);
		close(fd[1]);
	}
	return 0;
}



