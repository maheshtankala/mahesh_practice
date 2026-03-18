#include<stdio.h>
#include<string.h>
#include<sys/shm.h>


int main(){
	int shmid=shmget(1234,1024,IPC_CREAT | 0666);
	char *ptr=(char*)shmat(shmid,NULL,0);
	strcpy(ptr,"Hello , i'm shared memory!");
	printf("Writer wrote:%s\n",ptr);
	shmdt(ptr);
	return 0;
}

