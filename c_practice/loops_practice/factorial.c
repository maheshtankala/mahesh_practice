#include<stdio.h>
int main(){
	int i,a;
	unsigned long long fact=1;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a<0){
		printf("The factorial is not possible\n");}
	else{
		for(i=a;i>=1;i--){
			fact=fact*i;}
		printf("Factorial of %d is:%llu\n",a,fact);}
	return 0;
}	
