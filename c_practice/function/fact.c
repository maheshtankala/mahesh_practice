#include<stdio.h>
int fact(int);
int main(){
	int a,x;
	printf("enter the number:");
	scanf("%d",&a);
	x=fact(a);
	printf("Factorial of %d is %d\n",a,x);
	return 0;
}
int fact(int a){
	int f=1;
	for(int i=a;i>=1;i--){
		f=f*i;

	
	}
	return f;
}




