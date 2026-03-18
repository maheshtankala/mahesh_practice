#include<stdio.h>
#include<string.h>
#include<sys/msg.h>


struct msgbuf{
	long mtype;
	char mtext[100];
};


int main(){
	int msqid=msgget(1234,IPC_CREAT | 0666);
	if(msqid==-1){
		perror("msgget failed");
		return 1;
	}
	printf("Queue created with ID:%d\n",msqid);

	struct msgbuf msg;
	msg.mtype=1;
	strcpy(msg.mtext,"Hello via MQ!");
	msgsnd(msqid,&msg,sizeof(msg.mtext),0);
	return 0;
}


