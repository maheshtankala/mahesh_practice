#include<stdio.h>
int main(){
	long int i,n,set=0,notset=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<64;i++){
		if(n&(1<<i)){
			set++;
		}
		else{
			notset++;
		}
	}
	printf("set bits are:%d\nreset bits are:%d\n",set,notset);
}	

