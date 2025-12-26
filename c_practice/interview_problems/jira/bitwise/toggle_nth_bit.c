#include<stdio.h>
int main(){
	int n,bit;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the bit position:");
	scanf("%d",&bit);
	int x=n^(1<<bit);
	printf("%d",x);
}
