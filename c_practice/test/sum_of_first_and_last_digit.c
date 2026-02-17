#include<stdio.h>
int main(){
	int n,digit=0,x,first,last,sum;
	printf("Enter the number:");
	scanf("%d",&n);
	x=n;
        while(x!=0){
		x=x/10;
		digit++;
	}
	printf("digits=%d\n",digit);
        x=n;
	first=x%10;
	printf("first=%d\n",first);
	while(digit-1){
		x=x/10;
		digit--;
	}
	last=x;
        printf("last=%d\n",last);
	sum=last+first;
	printf("sum of first and last digit is:%d\n",sum);

}


