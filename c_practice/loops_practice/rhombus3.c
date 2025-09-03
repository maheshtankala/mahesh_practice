#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(int k=0;k<=n;k++){
			if(k==0 || k==n|| i==n-1 || i==0) 
			
			
			printf("*");
	                else
				printf(" ");
			
		}
		printf("\n");
	}
}
