#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *link;
};

void insert_node(struct node *head,int data);
struct node* delete_first(struct node *head);

int main(){
	struct node* head=malloc(sizeof(struct node));
	head->data=1;
	head->link=NULL;
	insert_node(head,2);
	insert_node(head,3);
	head=delete_first(head);
	

	while(head!=NULL){
		printf("%d ",head->data);
		head=head->link;
	}
}
void insert_node(struct node *head,int data){
	struct node* current=malloc(sizeof(struct node));
	current->data=data;
	current->link=NULL;
	while(head->link!=NULL){
		head=head->link;
	}
	head->link=current;
	}

struct node* delete_first(struct node *head){
	struct node *tmp=head;
	head=head->link;
	free(tmp);
	tmp=NULL;
	return head;
}	

