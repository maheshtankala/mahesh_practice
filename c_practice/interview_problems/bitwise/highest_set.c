#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<=31;i++){
	if((1<<i)&n){
		printf("%d\n",i);
		break;
	}
	}
}
