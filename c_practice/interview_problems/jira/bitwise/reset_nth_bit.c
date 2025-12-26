#include<stdio.h>
int main(){
	int n,bit;
	printf("Enter the number and bit position:");
	scanf("%d %d",&n,&bit);
	int x=n & ~(1<<bit);
	printf("%d",x);
}

