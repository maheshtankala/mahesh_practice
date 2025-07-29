#include<stdio.h>
#include<math.h>
int main(){
	float base,result;
	float exponent=0.5;
	printf("Enter the base value:");
	scanf("%f",&base);
	result=pow(base,exponent);
	printf("The value is %f",result);
	return 0;}
