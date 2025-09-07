#include<stdio.h>
int main(){
	int n,m;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter the position to make set:");
       scanf("%d",&m);
	n=n | (1<<m);
 	printf("%d",n);


	printf("Reset bit\n");
	int j,k;
	printf("Enter a number:");
	scanf("%d",&j);
	printf("Enter the bit position:");
	scanf("%d",&k);
	j=j & ~(1<<k);
	printf("%d",j);
		return 0;
}
		
