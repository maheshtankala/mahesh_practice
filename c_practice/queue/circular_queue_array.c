#include<stdio.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int data){
	if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=data;
	}
	else if((rear+1)%N==front){
		printf("Queue is full\n");
	}
	else{
		rear=(rear+1)%N;
		queue[rear]=data;
	}
}
void dequeue(){
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		printf("dequeued element is %d\n",queue[front]);
	       front=(front+1)%N;
	}
}

void peek(){
	printf("peek element is %d\n",queue[front]);
}
void display(){
	if(front==-1 && rear==-1){
		printf("queue is empty\n");
	}
	else{
		int i=front;
		while( i !=rear){
			printf("%d ",queue[i]);
			i=(i+1)%N;
		}
		printf("%d ",queue[rear]);
	}
		printf("\n");
}


void main(){
	int x;
	while(1){
		printf("Enter the element:");
		scanf("%d",&x);
		if(x==-1){
			break;
		}
		else{
			enqueue(x);
		}
	}

		display();
		peek();
		dequeue();
		display();
		peek();
	}
	




