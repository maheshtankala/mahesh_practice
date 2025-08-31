#include<stdio.h>
int main(){
	int n;
	int zcount=0,ocount=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=0;i<4;i++){
		int bit=n&1;
		if(bit==1){
			ocount++;
		}
		else{
			zcount++;
		}
		n=n>>1;
	}
	printf("Number of 0's :%d\n",zcount);
	printf("Number of 1's :%d\n",ocount);
	return 0;
}
