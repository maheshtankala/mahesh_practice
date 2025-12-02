#include<stdio.h>
int main(){
	int n,zcount=0,ocount=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<16;i++){
		if((n>>i)&1){
			zcount++;
		}
		else{
			ocount++;
		}
	}
	printf("zeroes count is:%d\nones count is:%d\n",zcount,ocount);
	return 0;
}
