#include<stdio.h>
#include<math.h>
int main(){
	float base,result;
	int exponent;
	printf("Enter the base value:");
	scanf("%f",&base);
	printf("Enter the exponent value:");
	scanf("%d",&exponent);
	result=pow(base,exponent);
	printf("The value is %f",result);
	return 0;}

