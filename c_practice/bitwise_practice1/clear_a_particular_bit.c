#include<stdio.h>
int main(){
	int n,pos;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the position:");
	scanf("%d",&pos);
	n=n & (~(1<<pos));
	printf("%d\n",n);
}

