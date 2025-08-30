#include<stdio.h>
int main(){
	int a=2,b=3;
	int *ptr1,*ptr2;
	ptr1=&a,ptr2=&b;
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;
	printf("After swapping a=%d and b=%d\n",*ptr1,*ptr2);
	return 0;
}
