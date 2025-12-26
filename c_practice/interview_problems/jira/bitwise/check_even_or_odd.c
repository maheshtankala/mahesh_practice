#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<=0){
		printf("Not defined\n");
		return 0;
	}
	if(n&1){
		printf("odd\n");
	}
	else{
		printf("Even\n");
	}
}
