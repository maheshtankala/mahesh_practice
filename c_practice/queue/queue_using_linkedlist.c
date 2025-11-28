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
	}
	else{
		rear->link=newnode;
		rear=newnode;
	}
}


void dequeue(){
	struct node *temp=NULL;
	temp=front;
	if(front==NULL && rear==NULL){
		printf("Queue is empty\n");
	}
	else{
		front=front->link;
		free(temp);
	}
}


void peek(){
	if(front==NULL && rear==NULL){
		printf("Queue is empty\n");
	}
	else{
		printf("peek element is %d\n",front->data);
	}
}

void display(){
	struct node *temp=NULL;
	if(front==NULL && rear==NULL){
		printf("Queue is empty\n");
	}
	else{
		temp=front;
		while(temp!=NULL){
			printf("->%d",temp->data);
			temp=temp->link;
		}
	}
	printf("\n");

}


void main(){
	int n;
	while(1){
		printf("Enter the element:");
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		else{
			enqueue(n);
		}
	}

	display();
	dequeue();
	display();
	peek();
	display();
	dequeue();
	display();
}


