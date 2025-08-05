#include<stdio.h>
int main(){
	float height,weight,bmi;
	printf("Enter the heigth in mts,weigth in kgs:");
	scanf("%f%f",&height,&weight);
	bmi=(weight/(height*height));
	printf("BMI is:%.2f",bmi);
	return 0;
}
	

