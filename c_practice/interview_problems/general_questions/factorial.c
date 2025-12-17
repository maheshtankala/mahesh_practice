#include<stdio.h>
void main(){
	printf("Enter the number:");
	int n;
	scanf("%d",&n);
	int fact=1;
	for(int i=n;i>1;i--){
		fact=fact*i;
	}
	printf("factorial of a %d is:%d\n",n,fact);
}

