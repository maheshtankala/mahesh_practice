#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *link;
};


void insert(struct node *head,int data);
void print(struct node *head);


int main(){
	struct node *head=malloc(sizeof(struct node));
	head->data=12;
	head->link=NULL;
	struct node *current=malloc(sizeof(struct node));
	current->data=13;
	current->link=NULL;
	head->link=current;
	current=malloc(sizeof(struct node));
	current->data=14;
	current->link=NULL;
	head->link->link=current;
	insert(head,15);
	print(head);
	}

void insert(struct node *head,int data){
	struct node *ptr=NULL,*temp;
	ptr=head;
	temp=malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	while(ptr->link!=NULL){
		ptr=ptr->link;
		}
	ptr->link=temp;


	}
void print(struct node *head){
	struct node *ptr1=NULL;
	ptr1=head;
	while(ptr1!=NULL){
		printf("%d ",ptr1->data);
		ptr1=ptr1->link;
	}
}




