#include<stdio.h>
int main(){
	short int n,x,y,a,b;
	printf("Enter the number:");
	scanf("%hd",&n);
	printf("Enter the positions to swap:");
	scanf("%hd%hd",&a,&b);
	x=n&(1<<a);
	y=n&(1<<b);

	n=n&~(1<<a);
	n=n&~(1<<b);

	n=n|(x<<a);
	n=n|(y>>b);
	printf("%hd\n",n);
}


