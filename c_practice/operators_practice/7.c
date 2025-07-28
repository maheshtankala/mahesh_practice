#include<stdio.h>
#define pi 3.1415 
int main(){
	float radius,area,circumference;
	printf("Enter the radius:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	circumference=2*pi*radius;
	printf("The area of circle is:%f\nThe circumference of the circle is:%f\n",area,circumference);
}
