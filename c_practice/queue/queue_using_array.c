#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int data){
	if(rear==N-1){
		printf("queue is full\n");
	}
	else if(front==-1 && rear==-1){
	       front=rear=0;
       	       queue[rear]=data;
	}
	else{
		rear++;
		queue[rear]=data;
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		printf("queue is empty\n");
	}
	else if(front==rear){
		printf("deleting element is:%d\n",queue[rear]);
		front=rear=-1;
	}
	else{
		printf("deleting element is:%d\n",queue[front]);
		front++;
	}
}


void display(){
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else{
		for(int i=front;i<rear+1;i++){
			printf("->%d ",queue[i]);
		}
	}
	printf("\n");
}
void peek(){
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else{
		printf("peek element is %d\n",queue[front]);
	}
}


int main(){

	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	display();
	dequeue();
	display();
	peek();
	return 0;
}
