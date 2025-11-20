#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	int *ptr1=&a,*ptr2=&b;
	temp=a;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("a=%d\nb=%d\n",a,b);
}

	
	
