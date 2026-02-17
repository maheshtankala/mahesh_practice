#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *link;
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *current=NULL;

void createnode(int data){
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


void insert_at_begin(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	current->link=head;
	head=current;
}


void insert_at_end(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	tail->link=current;
	tail=current;
}

void insert_at_position(int position,int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	struct node *ptr=NULL;
	ptr=head;
	while(position-2){
		ptr=ptr->link;
		position--;
	}
	current->link=ptr->link;
	ptr->link=current;
}

void insert_at_middle(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	struct node *slow=NULL,*fast=NULL;
	slow=fast=head;
	while(fast->link->link!=NULL && fast->link!=NULL){
		slow=slow->link;
		fast=fast->link->link;
	}
	current->link=slow->link;
	slow->link=current;
}


//void delete_at_begin(){

		

void display(){
	current=head;
	while(current!=NULL){
		printf("->%d",current->data);
		current=current->link;
	}
	printf("\n");
}


void delete_at_begin(){
	struct node *ptr=NULL;
	ptr=head;
	head=head->link;
	free(ptr);
	ptr=NULL;
}


void delete_at_end(){

	struct node *ptr=NULL;
	ptr=head;
	while(ptr->link->link!=NULL){
		ptr=ptr->link;
	}
	ptr->link=NULL;
	free(tail);
	tail=ptr;
}

void delete_at_middle(){
	struct node *slow=NULL;
	struct node *fast=NULL;
	struct node *prev=NULL;
	slow=fast=head;
	while(fast!=NULL && fast->link!=NULL){
		prev=slow;
		slow=slow->link;
		fast=fast->link->link;
	}
	prev->link=slow->link;
	free(slow);

}


void delete_at_position(int pos){
	current=head;
	while(pos-2){
		current=current->link;
		pos--;
	}
	struct node *temp=NULL;
	temp=current->link;
	current->link=current->link->link;
	free(temp);
	temp=NULL;
}

void reverse(){
	current=head;
	struct node *prev=NULL;
	struct node *next=NULL;
	next=head;
	while(next!=NULL){
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	head=prev;
}


void main(){
	int n;
	while(1){
	printf("Enter the data:");
	scanf("%d",&n);
	if(n==-1){
		break;
	}
	else{
		createnode(n);
	}
	}
	display();
//	insert_at_begin(8);
//	display();
//	insert_at_end(12);
//	display();
//	int pos;
//	printf("Enter the position:");
//	scanf("%d",&pos);
//	insert_at_position(pos,22);
//	display();
//	insert_at_middle(99);
//	display();
//	delete_at_begin();
//	display();
//	delete_at_end();
//	display();
	delete_at_middle();
	display();
	reverse();
	display();
	delete_at_position(2);
	display();




}

