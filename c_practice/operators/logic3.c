#include <stdio.h>
int main(){
	 int maths,english,total;
	printf("enter the marks of math,english:");
	scanf("%d %d",&maths,&english);
	total=maths + english;
if((maths>40 && english>50) || total>90)
{
	printf("You are eligible for admission\n");}
else{
printf("You are not eligible for admission\n");}
}


