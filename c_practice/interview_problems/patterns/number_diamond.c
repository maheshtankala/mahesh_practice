#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		for(k=n;k>n-i;k--){
			printf("%d ",k);
		}
		for(j=k+2;j<=n;j++){
		
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=1;i<=n-1;i++){
		for(j=1;j<=i;j++){
			printf("  ");
		}
		for(k=n;k>=i+1;k--){
			printf("%d ",k);
		}
		for(j=k+2;j<=n;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}

