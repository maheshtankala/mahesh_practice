#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *link;
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *current=NULL;


void create_node(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	if(head==NULL){
		head=tail=current;
	}
	else{
		tail->link=current;
		tail=current;
	}
}

void reverse(){
	struct node *next=NULL;
	struct node *prev=NULL;
	next=head;
	current=head;
	while(next!=NULL){
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	head=prev;
}

void display(){
	current=head;
	while(current!=NULL){
		printf("%d->",current->data);
		current=current->link;
	}
	printf("\n");
}

void main(){

	int n;
	while(1){
		printf("Enter data:");
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		else{
			create_node(n);
		}
	}


	display();
	reverse();
	display();
}




