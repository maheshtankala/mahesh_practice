#include<stdio.h>
int main(){
	int n,a=1,b=1,c;
	printf("Enter the number:");
	scanf("%d",&n);
	while(a<=n){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
	
