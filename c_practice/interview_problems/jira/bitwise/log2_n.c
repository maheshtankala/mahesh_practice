#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int log2=-1;
	while(n>0){
		n=n>>1;
		log2++;
	}
	printf("%d",log2);
}
