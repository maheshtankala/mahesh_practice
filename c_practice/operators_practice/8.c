#include<stdio.h>
int main(){
	float centimeters,meters,kilometers;
	printf("Enter the value in centimeters:");
	scanf("%f",&centimeters);
	meters=centimeters/100;
	kilometers=centimeters/100000;
	printf("afer converting centimeters into meters:%f\n",meters);
	printf("after converting centimeters imnto kilometers:%f\n",kilometers);
	return 0;
}
