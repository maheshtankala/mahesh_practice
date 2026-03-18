#include<stdio.h>
#include<sys/shm.h>


int main(){
	int shmid=shmget(1234,1024,0666);
	char *ptr=(char*)shmat(shmid,NULL,0);
	printf("Reader read:%s\n",ptr);
	shmdt(ptr);
	shmctl(shmid,IPC_RMID,NULL);
	return 0;
}

