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

void insert_at_position(int pos,int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	struct node *ptr=NULL;
	ptr=head;
	while(pos-2){
		ptr=ptr->link;
		pos--;
	}
	current->link=ptr->link;
	ptr->link=current;
}

void insert_at_middle(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	struct node *slow=NULL;
	struct node *fast=NULL;
	slow=head;
	fast=head;
	while(fast->link!=NULL && fast->link->link!=NULL){
		slow=slow->link;
		fast=fast->link->link;
	}
	current->link=slow->link;
	slow->link=current;
}
void delete_first(){
	struct node *ptr=NULL;
	ptr=head;
	head=head->link;
	free(ptr);
}
void delete_last(){
	current=head;
	while(current->link->link!=NULL){
		current=current->link;
	}
	current->link=NULL;
	free(tail);
	tail=current;
		

}


void delete_at_position(int pos){
	struct node *ptr=NULL;
	ptr=head;
	while(pos-2){
		ptr=ptr->link;
		pos--;
	}
	struct node *temp=NULL;
	temp=ptr->link;
	ptr->link=ptr->link->link;
	free(temp);
}

void delete_at_middle(){
	struct node *slow=NULL;
	struct node *fast=NULL,*ptr=NULL;
	slow=head;
	fast=head;
	while(fast->link!=NULL && fast->link->link!=NULL){
		ptr=slow;
		slow=slow->link;
		fast=fast->link->link;
	}
	struct node *temp=NULL;
	ptr->link=slow->link;
	temp=slow;
	free(temp);
}
void print(){
	current=head;
	while(current!=NULL){
		printf("%d->",current->data);
		current=current->link;
	}
	printf("\n");
}



void main(){
     while(1){
	     int n;
	     printf("Enter the data:");
	     scanf("%d",&n);
	     if(n==-1){
		     break;
	     }
	     else{
		     createnode(n);
	     }
     }
print();
insert_at_begin(10);
print();
insert_at_end(20);
print();
insert_at_middle(50);
print();
insert_at_position(2,100);
print();
delete_first();
print();
delete_last();
print();
delete_at_position(3);
print();
delete_at_middle();
print();


}









