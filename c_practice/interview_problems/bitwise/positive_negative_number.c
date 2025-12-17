#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int size=sizeof(int)*8;
	if((1<<(size-1))&n){
		printf("Negative\n");
	}
	else{
		printf("Positive\n");
	}
}
