#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<=0){
		printf("Not defined\n");
	}
	if(n&(n-1)){
		printf("Not power of 2\n");
	}
	else{
		printf("Power of 2\n");
	}
}

