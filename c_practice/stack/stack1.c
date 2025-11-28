#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
int n;

void push(){
	if(top==N-1){
		printf("stack is full\n");
	}
	else{
		printf("Enter the data:");
		scanf("%d",&n);
		top++;
		stack[top]=n;
	}
}
void pop(){
	int x;
	if(top==-1){
		printf("stack is empty\n");
	}
	else{
		x=stack[top];
		top--;
		printf("popped data is %d\n",x);
	}
}
void peek(){
	if(top==-1){
		printf("stack is empty\n");
	}
	else{
		printf("top data is %d\n",stack[top]);
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d ",stack[i]);
	}
	printf("\n");
}
int main(){
	int choice;
	while(1){
		printf("Enter your choice:1.push 2.pop 3.peek 4.display\n");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		default:
			printf("Invalid choice\n");
			return 0;
	}
	}
}	


