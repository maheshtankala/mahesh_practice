#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter the row size:");
	scanf("%d",&n);
	k=n*(n+1)/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" %d  ",k);
			k--;
		}
		printf("\n");
	}
}
			
			
