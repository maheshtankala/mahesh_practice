#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node* link;
};

struct node* head=NULL;
struct node* tail=NULL;
struct node* current=NULL;

void create_node(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	if(head==NULL){
		head=tail=current;
		tail->link=head;
	}
	else{
		tail->link=current;
		tail=current;
		tail->link=head;
	}
}


void insert_at_begin(int data){
	current=malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	current->link=head;
	head=current;
	tail->link=head;
}


void insert_at_end(int data){
	current=(struct node*)malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	tail->link=current;	
	current->link=head;
	tail=current;
}


void insert_at_position(int pos,int data){
	current=malloc(sizeof(struct node));
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
void delete_at_begin(){
	struct node *temp=NULL;
	temp=head;
	head=head->link;
	tail->link=head;
	free(temp);
}


void delete_at_end(){
	current=head;
	while(current->link->link!=head){
		current=current->link;
	}
		current->link=head;
		free(tail);
		tail=current;
	
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
}


void reverse(){
	struct node *ptr1=NULL;
	struct node *ptr2=NULL;
	current=head;
	ptr2=head;
	while(current->link!=head){
		ptr2=current->link;
		current->link=ptr1;
		ptr1=current;
		current=ptr2;
	    }
	current->link=ptr1;

	head->link=current;
	head=current;
}



void display(){
	current=head;
	do{
		printf("->%d",current->data);
		current=current->link;
	}
	while(current!=head);

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
	insert_at_position(3,35);
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
		
	
