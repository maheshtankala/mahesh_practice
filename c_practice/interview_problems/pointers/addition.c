#include<stdio.h>
int main(){
	int a=3,b=5;
	int *ptr1=&a,*ptr2=&b;
	int sum= *ptr1+*ptr2;
	printf("%d",sum);
	return 0;
}
