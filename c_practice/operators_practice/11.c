#include<stdio.h>
int main(){
	float days;
	float years,weeks,months;
	printf("Enter number of days:");
	scanf("%f",&days);
	years=days/365;
	weeks=days/7;
	months=days/30;
	printf("The days are converted into\n years %f\n weeks %f\n months %f\n",years,weeks,months);
	return 0;
}
