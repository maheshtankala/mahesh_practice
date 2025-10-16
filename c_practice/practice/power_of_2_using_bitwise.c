#include<stdio.h>
int main(){
	int i,n,count=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(n!=0){
		if(n&1){
			count++;
		}
		n=n>>1;
	}
	if(count==1){
		printf("The number is power of 2");
	}
	else{
		printf("Not power of 2");
	}
	return 0;
}
