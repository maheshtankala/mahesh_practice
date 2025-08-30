#include<stdio.h>
int main(){
	int temp,a=1,b=2;
	int *p1,*p2;
	p1=&a,p2=&b;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("After swapping a=%d and b=%d\n",*p1,*p2);
	return 0;
}
