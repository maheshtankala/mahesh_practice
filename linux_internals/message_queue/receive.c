#include<stdio.h>
#include<sys/msg.h>

struct msgbuf{
	long mtype;
	char mtext[100];
};

int main(){
	int msqid=msgget(1234,0666);
	if(msqid==-1){
		perror("message failed");
		return 1;
	}

	struct msgbuf msg;
	msgrcv(msqid,&msg,sizeof(msg.mtext),1,0);
	printf("Receiver got: %s\n",msg.mtext);
	msgctl(msqid,IPC_RMID,NULL);
	printf("Queue deleted\n");
	return 0;
}


