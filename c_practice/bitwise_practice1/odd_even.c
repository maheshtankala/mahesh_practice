#include<stdio.h>
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	if((a&1)==0){
		printf("The entered number is Even");
	}
	else{
		printf("The entered number is odd");
	}return 0;
}
