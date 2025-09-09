#include<stdio.h>
int main(){
	int i,k,j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n;j++){
			if(i==j || (i+j)==n||j==n+i||(i+j)==2*n+1){
				printf("*");
			}
			else{
				printf(" ");
			}}printf("\n");}}
		
		
