#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n&(1<<31)){
		printf("set\n");
	}
	else{
		printf("not set\n");
	}
}
	               
