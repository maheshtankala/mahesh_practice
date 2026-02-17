#include<stdio.h>
int main(){
	int a=5,b=6;
	int *ptr1=&a,*ptr2=&b;
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("After swapping a=%d\nb=%d\n",a,b);
}
