#include<stdio.h>
int main(){
	int n,a=0,b=1,c,i=2;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n){
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	printf("Reverse fabinocci series:\n");
	while(b>0){
		printf("%d ",b);
		c=b-a;
		b=a;
		a=c;
	}

}
