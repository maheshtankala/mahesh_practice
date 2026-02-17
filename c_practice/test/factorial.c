#include<stdio.h>
int main(){
	int n,fact=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=n;i>1;i--){
		fact=fact*i;
	}
	printf("factorial of %d=%d\n",n,fact);
}
