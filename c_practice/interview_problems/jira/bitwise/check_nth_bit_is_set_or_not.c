#include<stdio.h>
int main(){
	int n,bit;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the bit position:");
	scanf("%d",&bit);
	if((n>>bit)&1){
		printf("set\n");
	}
	else{
		printf("Not set\n");
	}
}
