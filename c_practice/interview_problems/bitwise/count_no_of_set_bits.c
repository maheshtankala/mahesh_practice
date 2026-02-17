#include<stdio.h>
int main(){
	int i,n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0){
		if(n&1==1){
			count++;
		}
		n=n>>1;
	}
	printf("count=%d\n",count);
}


