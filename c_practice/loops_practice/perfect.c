#include<stdio.h>
int main(){
	int i,n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			count=count+i;
		}
	}
	if(count==n){
		printf("The number is perfect");
	}
	else{
		printf("The number is not perfect");
	}
	return 0;
}


