#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *link;
};

struct node *top=NULL;
struct node *newnode=NULL;

void push(int data){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->link=NULL;
	newnode->link=top;
	top=newnode;
}
void display(){
	struct node *temp=NULL;
	temp=top;
	if(top==NULL){
		printf("stack is empty\n");
	}
	else{
	while(temp!=NULL){
		printf("->%d",temp->data);
		temp=temp->link;
	}
	}
	printf("\n");
}

void pop(){
	struct node *temp=NULL;
	temp=top;
	if(top==NULL){
		printf("Your stack is empty\n");
	}
	else{
	printf("popped data is %d\n",top->data);	
	top=temp->link;
	free(temp);
	}
	}
void peek(){
	if(top==NULL){
		printf("your is stack is empty\n");
	}
	else{
		printf("your top element is %d\n",top->data);
	}
}

void main(){
	push(1);
	push(2);
	push(3);
	push(4);
	display();
	peek();
	pop();
	display();
	pop();
	display();
}

