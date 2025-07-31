#include<stdio.h>
int main(){
	int n,remainder,cube,sum=0,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		remainder=n%10;
		cube=remainder*remainder*remainder;
		sum=sum+cube;
		n=n/10;}
	if(sum==temp){
		printf("The entered number is a Armstrong number%d",n);}
	else{
		printf("The entered number is not a Armstrong number %d",n);}
	return 0;
}
