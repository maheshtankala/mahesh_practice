#include<stdio.h>
int main(){
	int a=0,b=1,c,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
