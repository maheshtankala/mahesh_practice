#include<stdio.h>
#define N 5

int stack[N];
int top=-1;
void push(){
	int n;
	printf("Enter the number:");
        scanf("%d",&n);
	if(top==N-1){
		printf("stack is full\n");
	}
	else{
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
		printf("poped data is %d\n",x);
	}
}
void peek(){
	if(top==-1){
		printf("stack is empty\n");
	}
	else{
		printf("top element is %d\n",stack[top]);
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d ",stack[i]);
	}
	printf("\n");
}
void main(){
	int i;
	for(i=0;i<5;i++){
		push();
	}
	display();
	pop();
	peek();
	display();
	push();
	display();
	push();
	display();
}

	

