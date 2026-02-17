#include<stdio.h>
int main(){
	int n=6,y=0,z;
	while(n>0){
		z=n&1;
		y=y<<1;
		y=y|z;
		n=n>>1;
	}
	printf("%d\n",y);
}
