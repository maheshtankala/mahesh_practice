#include<stdio.h>
int main(){
	int n,bit,x;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the bit position:");
	scanf("%d",&bit);
	x=n & ~(1<<bit);
	
	printf("%d\n",x);
}
