#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *link;
};
struct node* insert_at_begin(struct node* head,int data);
void print(struct node* head);
int main(){
	struct node *head=malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;
	struct node *current=malloc(sizeof(struct node));
	current->data=46;
	current->link=NULL;
	head->link=current;
	head=insert_at_begin(head,44);
	print(head);
}

struct node* insert_at_begin(struct node* head,int data){
	struct node *new;
	new=malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	new->link=head;
	head=new;
	return head;
}
void print(struct node* head){
	struct node *p;
	p=head;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->link;
	}
	
}



