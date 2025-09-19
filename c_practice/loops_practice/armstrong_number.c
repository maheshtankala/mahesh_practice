#include<stdio.h>
#include<math.h>
int main(){
	int count=0,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int temp=n,comp=n;
	while(n>0){
		n=n/10;
		count++;}
	while(temp>0){
		int x=temp%10;
		sum+=pow(x,count);
		temp=temp/10;}
	if(sum==comp){
		printf("Given number %d is a armstrong number\n",comp);
	}
	else{
	        printf("Given number %d is not a armstrong number\n",comp);
	}
return 0;
}

