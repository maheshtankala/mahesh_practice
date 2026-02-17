#include<stdio.h>
int main(){
	int n,i,temp=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			temp+=i;
		}
	}
	if(temp==n){
		printf("%d is perfect number\n",n);
	}
	else{
		printf("%d is not a perfect number\n",n);
	}
}
	
