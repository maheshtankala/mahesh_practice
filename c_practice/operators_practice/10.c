#include<stdio.h>
int main(){
	float fahrenheit,celsius;
	printf("Enter the temperature in Fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*(5/9);
	printf("After converting the fahrenheit into celsius %.2f",celsius);
	return 0;
}
