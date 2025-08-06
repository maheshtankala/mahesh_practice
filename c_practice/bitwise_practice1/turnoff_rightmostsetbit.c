#include<stdio.h>
int main(){
	int n,count=0;
	printf("Enter the number :");
	scanf("%d",&n);
	while(n>0){
		if(n&1){
			break;}
		count++;

		n=n>>1;
	}
	n=n&(~(1<<count));
	printf("%d",count);
	return 0;
}
