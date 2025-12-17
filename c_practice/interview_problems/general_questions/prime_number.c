#include<stdio.h>
void main(){
	int count=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=(n/2);i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("prime  number\n");
	}
	else{
		printf("not prime number\n");
	}
}
	
