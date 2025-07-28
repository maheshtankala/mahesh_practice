#include<stdio.h>
int main(){
	float celsius,fahrenheit;
	printf("Enter the temperature in celsius:");
	scanf("%f",&celsius);
	fahrenheit=(celsius*(9/5))+32;
	printf("After converting celcius into fahrenheit:%.2f",fahrenheit);
	return 0;
}
