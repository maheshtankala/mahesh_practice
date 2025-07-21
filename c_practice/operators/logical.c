#include<stdio.h>
int main(){
	int a=4,b=6;
	int c;
	c=(a<b) && (b++);
	printf("%d\n",c);
	printf("%d",b);
	return 0;}
