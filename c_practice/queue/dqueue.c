#include<stdio.h>
#define N 5
int dqueue[N];
int front=-1;
int rear=-1;


void enqueuefront(int data){
	if((front==-1 && rear==N-1) || (front==rear+1)){
		printf("queue is full\n");
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		dqueue[front]=data;
	}
	else if(front==0){
		front=N-1;
		dqueue[front]=data;
	}
	else{
		front--;
		dqueue[front]=data;
	}
}


void enqueuerear(int data){
	if((front==-1 && rear==N-1) || (front==rear+1)){
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1){
                front=rear=0;
                dqueue[rear]=data;
        }
	else if(rear==N-1){
		rear=0;
		dqueue[rear]=data;
	}
	else{
		rear++;
		dqueue[rear]=data;
	}
}

void dequeuefront(){
	if(front==-1 && rear==-1){
		printf("queue is empty\n");
	}
	else if(front==rear){
		front=rear=-1;
	}
	else if(front==N-1){
		front=0;
	}
	else{
		front++;
	}
}


void dequeuerear(){
	if(front==-1 && rear==-1){
                printf("queue is empty\n");
        }
        else if(front==rear){
                front=rear=-1;
        }
	else if(rear==0){
		rear=N-1;
	}
	else{
		rear--;
	}
}


void display(){
	int i=front;
	while(i!=rear){
		printf("%d ",dqueue[i]);
		i=(i+1)%N;
	}
	printf("\n");

}


int main(){

	enqueuefront(1);
	enqueuefront(2);
	enqueuerear(3);
	enqueuerear(4);
	enqueuefront(5);
	display();
	dequeuefront();
	display();
	enqueuerear(8);
	display();
}




	
