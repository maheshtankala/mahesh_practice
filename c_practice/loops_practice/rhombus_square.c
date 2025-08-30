#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0 || i==n-1 || j==0 || j==n-1 || i+j==n/2 || j-i==n/2 || i-j==n/2 || i+j== (n-1)+(n/2))
			printf("*");
			else
				printf(" ");
		}printf("\n");
	}
}
