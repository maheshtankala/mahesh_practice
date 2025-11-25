#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head=(struct node*)malloc(sizeof(struct node));
			head->data=42;
			head->link=NULL;

	struct node *current=(struct node*)malloc(sizeof(struct node));
 			current->data=12;
			current->link=NULL;
			head->link=current;

		struct node *ptr=head;
		while(ptr!=NULL){
			printf("%d -> ",ptr->data);
			ptr=ptr->link;
		}
		printf("NULL\n");
		printf("%p",head);
}
			
