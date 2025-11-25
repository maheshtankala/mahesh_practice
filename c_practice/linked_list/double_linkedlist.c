#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node* prev;
	struct node* next;
};

struct node *head=NULL;
struct node *current=NULL;
struct node *tail=NULL;

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


void insert_at_position(int pos,int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->prev=NULL;
	current->next=NULL;
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
	current=head;
	head=head->next;
	head->prev=NULL;
	free(current);
}

void delete_at_end(){
	current=head;
	while(current->next->next!=NULL){
		current=current->next;
	}
	current->next=NULL;
	free(tail);
	tail=current;
}

void delete_at_position(int pos){
	current=head;
	while(pos-2){
		current=current->next;
		pos--;
	}
	struct node *temp=NULL;
	temp=current->next;
	current->next=current->next->next;
	current->next->prev = current;
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
int main(){
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
		insert_at_end(200);
		display();
		insert_at_position(3,15);
		display();
		delete_at_begin();
		display();
		delete_at_end();
		display();
		delete_at_position(3);
		display();
		reverse();
		display();
}
