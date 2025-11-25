#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
void insert_at_position(struct node *head,int data,int position);
int main(){
	struct node *head=malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;
	struct node *current=malloc(sizeof(struct node));
	current->data=47;
	current->link=NULL;
	head->link=current;
	current=malloc(sizeof(struct node));
	current->data=48;
	current->link=NULL;
	head->link->link=current;
	printf("Enter the data to be inserted:");
	int x,pos;
	scanf("%d",&x);
	printf("Enter the position:");
	scanf("%d",&pos);
	insert_at_position(head,x,pos);
}
void insert_at_position(struct node *head,int data,int position){
	struct node *ptr,*ptr1;
	ptr1=head;
	ptr=malloc(sizeof(struct node));
	ptr->data=data;
	ptr->link=NULL;
	while(position-2){
		head=head->link;
		position--;
	}
	ptr->link=head->link;
	head->link=ptr;
	while(ptr1!=NULL){
		printf("%d ",ptr1->data);
		ptr1=ptr1->link;
	}
}
	


