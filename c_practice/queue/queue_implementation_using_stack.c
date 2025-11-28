#include<stdio.h>
#define N 5
int top1=-1,top2=-1;
int count=0;
int s1[N];
int s2[N];


void push1(int data){
	
		top1++;
		s1[top1]=data;
	}


void push2(int data){
		top2++;
		s2[top2]=data;
}

int  pop1(){
	return s1[top1--];

}

int pop2(){
	return s2[top2--];
}


void enqueue(int n){
	push1(n);
	count++;
}

void dequeue(){
	int i,a,b;
	if(top1==-1 && top2==-1){
		printf("Queue is empty\n");
	}
	else{
		for(i=0;i<count;i++){
			a=pop1();
			push2(a);
		}
		b=pop2();
		printf("dequeued element is %d\n",b);
		count--;
		for(i=0;i<count;i++){
			a=pop2();
			push1(a);
		}
	}
}


void display(){

	if(top1==-1){
		printf("queue is empty\n");
	}
	else{
		for(int i=0;i<=top1;i++){
			printf("%d ",s1[i]);
		}
	}
	printf("\n");
}

void main(){
	int c;
	while(1){
		printf("Enter the data:");
		scanf("%d",&c);
		if(c==-1){
			break;
		}
		else{
			enqueue(c);
		}
	}
	display();
	dequeue();
	display();

}



