#include<stdio.h>
int main(){
	printf("Enter the number:");
	int n;
	scanf("%d",&n);
	if(n==0){
		printf("Not power of 2\n");
		return 0;
	}
	if((n & (n-1))==0){
		printf("power of 2\n");
	}
	else{
		printf("Not power of 2\n");
	}
}



