#include<stdio.h>
void factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
printf("The factorial of %d is %d ",n,fact);
}

int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	factorial(n);
	return 0;
}

