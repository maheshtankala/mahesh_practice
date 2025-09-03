#include<stdio.h>
int main(){
	int i,bit[4],n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=3;i>=0;i--){
		printf("%d",(n>>i)&1);
	}
	printf("\n");
}
