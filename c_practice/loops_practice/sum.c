#include<stdio.h>
int main(){
	int i,a,sum=0;
	printf("Enter the number :");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		sum=sum+i;}
	printf("Sum of first %d natural numbers is:%d",a,sum);
	return 0;
}
