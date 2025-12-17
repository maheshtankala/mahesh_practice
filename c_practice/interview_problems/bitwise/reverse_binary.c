#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int y=0,z;
	for(int i=0;i<4;i++){
		 z=n&1;
		 y=y<<1;
		 y=y|z;
		 n=n>>1;
	}
		

	printf("%d\n",y);
}


