#include<stdio.h>
int main(){
	int i,a,count=1;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=2;i<=(a/2);i++);
	{
		if(a%i==0){
			count++;}
	}
		if(count==2){
			printf("The number is prime %d\n",a);
		}
		else{
			printf("The number is not prime");}
		return 0;
	}

	
