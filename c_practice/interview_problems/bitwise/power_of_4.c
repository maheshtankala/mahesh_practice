#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int count=0;
	if((n&(n-1))==0){
		while((n&1)!=1){
			count++;
			n=n>>1;
		}
		if(count%2==0){
			printf("power of 4\n");
		}
		else{
			printf("not\n");
		}
	}
	else{
		printf("not\n");
	}
}
