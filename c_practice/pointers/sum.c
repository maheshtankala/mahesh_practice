#include<stdio.h>
int main(){
	int sum,n1,n2;
	int *ptr1=&n1,*ptr2=&n2;
	printf("Enter the two numbers:");
	scanf("%d%d",ptr1,ptr2);
	sum=*ptr1+*ptr2;
	printf("sum is %d\n",sum);
	return 0;
}
