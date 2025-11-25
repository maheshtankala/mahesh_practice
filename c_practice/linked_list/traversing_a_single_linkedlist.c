#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *link;
};
int count_of_nodes(struct node*);
int main(){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=42;
	head->link=NULL;
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=63;
	current->link=NULL;
	head->link=current;
	current=(struct node*)malloc(sizeof(struct node));
	current->data=65;
	current->link=NULL;
	head->link->link=current;
	printf("count of nodes=%d\n",count_of_nodes(head));
}	


       int count_of_nodes(struct node *ptr){
	       int count=0;
	       if(ptr==NULL){
		       printf("list is empty\n");
	       }
	       while(ptr!=NULL){
		       count++;
		       ptr=ptr->link;
	       }
	       return count;
       }

		       
		       

	       


