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


void delete_at_begin(){
	current=head;
	head=head->link;
	free(current);
	current=NULL;
}


void delete_at_end(){
	current=head;
	while(current->link->link!=NULL){
		current=current->link;
	}
	current->link=NULL;
	free(tail);
	tail=current;
}


void delete_at_position(int pos){
	current=head;
	while(pos-2){
		current=current->link;
		pos--;
	}
	struct node* temp=NULL;
	temp=current->link;
	current->link=current->link->link;
	free(temp);
}

void print(){
	current=head;
	while(current!=NULL){
		printf("->%d",current->data);
		current=current->link;
	}
	printf("\n");
}
void reverse(){
	current=head;
	struct node* ptr1=NULL;
	struct node* ptr2=NULL;
	ptr2=head;
	while(ptr2!=NULL){
		ptr2=current->link;
		current->link=ptr1;
		ptr1=current;
		current=ptr2;
	}
	head=ptr1;

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
   print();
   insert_at_begin(100);
   print();
   insert_at_end(200);
   print();
   insert_at_position(3,15);
   print();
   delete_at_begin();
   print();
   delete_at_end();
   print();
   delete_at_position(3);
   print();
   reverse();
   print();

   }









		






