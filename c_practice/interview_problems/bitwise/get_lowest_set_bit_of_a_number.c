#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<32;i++){
		if((n>>i)&1){
			printf("%d\n",i);
			break;
		}
	}
}

