#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The two numbers after swapping are a=%d,b=%d\n:",a,b);
	return 0;
}
