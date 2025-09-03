#include<stdio.h>
int main(){
	int n,i=0,bit[32];
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0){
		bit[i]=n%2;
		n=n/2;
		i++;
	}
	printf("Binary:");
	for(int j=i-1;j>=0;j--){
		printf("%d",bit[j]);
	}
	printf("\n");
}
