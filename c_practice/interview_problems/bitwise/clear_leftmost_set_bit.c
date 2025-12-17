#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=31;i>=0;i--){
		if( (1<<i)&n){
			n = n & (~(1<<i));
			break;
		}
	}
	printf("%d\n",n);

}
