#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};


struct node *head=NULL;
struct node *tail=NULL;
struct node *current=NULL;

void create_node(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->prev=NULL;
	current->next=NULL;
	

	if(head==NULL){
		head=tail=current;
	}
	else{
		tail->next=current;
		current->prev=tail;
		tail=current;
	}
}

void insert_at_begin(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->prev=NULL;
	current->next=NULL;


	current->next=head;
	head->prev=current;
	head=current;
}

void insert_at_end(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->prev=NULL;
	current->next=NULL;


	current->prev=tail;
	tail->next=current;
	tail=current;
}

void insert_at_position(int data,int pos){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->next=NULL;
	current->prev=NULL;
	struct node *ptr=NULL;
	ptr=head;
	while(pos-2){
		ptr=ptr->next;
		pos--;
	}
	current->prev=ptr;
	current->next=ptr->next;
	ptr->next=current;
	current->next->prev=current;
}

void delete_at_begin(){
	struct node *ptr=NULL;
	ptr=head;
	head=head->next;
	head->prev=NULL;
	free(ptr);
	ptr=NULL;
}

void delete_at_end(){
	struct node *temp=NULL;
	temp=tail;
	tail=tail->prev;
	tail->next=NULL;
	free(temp);

}

void delete_at_position(int pos){
	struct node *temp=NULL;
	current=head;
	while(pos-2){
		current=current->next;
		pos--;
	}
	temp=current->next;
	current->next=current->next->next;
	current->next->prev=current;
	free(temp);
}

void reverse(){
	struct node *temp=NULL;
	current=head;
	while(current!=NULL){
		temp=current->prev;
		current->prev=current->next;
		current->next=temp;
		current=current->prev;
	}
	head=temp->prev;

}


void display(){
	current=head;
	while(current!=NULL){
		printf("->%d",current->data);
		current=current->next;
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
			create_node(n);
		}
	}
	display();
	insert_at_begin(100);
	display();
	insert_at_end(222);
	display();
	insert_at_position(33,3);
	display();
	delete_at_begin();
	display();
	delete_at_end();
	display();
	delete_at_position(4);
	display();
	reverse();
	display();

	







}
