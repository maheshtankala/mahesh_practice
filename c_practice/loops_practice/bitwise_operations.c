#include<stdio.h>
int main(){
	int a,b,c,d,e;
        printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	c=a&b;
	d=a|b;
	e=a^b;
	printf("%d\n%d\n%d\n",c,d,e);
	return 0;
}
