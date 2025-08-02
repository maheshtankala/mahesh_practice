#include<stdio.h>
int main(){
int n,i;
int fact=1;
printf("enter a number:");
scanf("%d",&n);
if(n<0){
	printf("Factorial is not defined for negative numbers\n");
	return 1;
}
for(i=2;i<=n;i++){
	int a=fact;
	int b=i;
	int result=0;
	while(b>0){
		if(b&1){
			result=result+a;
		}
		a=a<<1;
		b=b>>1;
	}
	fact=result;}
	printf("Factorial of %d is %d\n",n,fact);
	return 0;
	}
