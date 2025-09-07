#include<stdio.h>
int table();
int main(){
	table();
	return 0;
}
int table(){
	int x,n;
	 printf("Enter the number:");                                    scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		x=n*i;
	printf("%d x %d =%d\n",n,i,x);}
	return 0;
}

