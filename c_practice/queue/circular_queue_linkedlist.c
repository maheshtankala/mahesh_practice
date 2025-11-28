#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *link;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int data){
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->link=NULL;
	if(front==NULL && rear==NULL){
		front=rear=newnode;
		rear->link=front;
	}
	else{
		rear->link=newnode;
		rear=newnode;
		rear->link=front;
	}
}

void dequeue(){
	struct node *temp=NULL;
	temp=front;
	if(front==NULL && rear==NULL){
		printf("Queue is empty\n");
	}
	else if(front==rear){
		front=rear=NULL;
		free(temp);
	}
	else{	
	front=front->link;
	rear->link=front;
	free(temp);
	}
}

void display(){
	struct node *temp=NULL;
	temp=front;
	while(temp->link!=front){
		printf("->%d",temp->data);
		temp=temp->link;
	}
	printf("\n");

}

int main(){
	int x;
	while(1){
		printf("Enter the data:");
		scanf("%d",&x);
		if(x==-1){
			break;
		}
		else{
			enqueue(x);
		}

	}
	display();
	dequeue();
	display();
}

