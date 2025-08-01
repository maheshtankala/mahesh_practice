#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The nunbers after awapping are%d,%d",a,b);
       return 0;
}       
