#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int print_data(struct node*);
void print_link(struct node*);
int main(){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=12;
	head->link=NULL;
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=13;
	current->link=NULL;
	head->link=current;
	current=(struct node*)malloc(sizeof(struct node));
	current->data=14;
	current->link=NULL;
	head->link->link=current;
        print_data(head);
	printf("\n");
	print_link(head);
}

int print_data(struct node *ptr){
	while(ptr!=NULL){
		if(ptr==NULL){
			printf("list is empty\n");
		}
		printf("%d ",ptr->data);
		ptr=ptr->link;
		
	}
}

void print_link(struct node *address){
	while(address!=NULL){
		if(address==NULL){
			printf("list is empty\n");
		}
		printf("%p ",address->link);
		address=address->link;
	}}



