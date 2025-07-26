#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("The sum of %d and %d is %d\n",a,b,c);
	printf("The subtraction of %d and %d is %d\n",a,b,d);
	printf("The multiplication of %d and %d is %d\n",a,b,e);
	printf("The division of %d and %d is %d\n",a,b,f);
	printf("The modulus of %d and %d is %d\n",a,b,g);
	return 0;

}
