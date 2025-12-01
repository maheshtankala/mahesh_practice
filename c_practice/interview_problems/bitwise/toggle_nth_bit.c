#include<stdio.h>
int main(){
	int n,pos,res;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the bit position(0-31):");
	scanf("%d",&pos);
	res=n^(1<<pos);
	printf("%d\n",res);
}

