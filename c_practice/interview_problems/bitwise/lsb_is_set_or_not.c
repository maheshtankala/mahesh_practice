#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n&1){
		printf("lsb is set\n");
	}
	else{
		printf("lsb is not set\n");
	}
	return 0;
}
