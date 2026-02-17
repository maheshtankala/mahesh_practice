#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>n-i;j--){
			printf("%d ",j);
		}
		for(k=n-1;k>=i;k--){
			printf("  ");
		}
		for(k=n-2;k>=i;k--){
			printf("  ");
		}
		for(j=n-i+1;j<=n;j++){
			if(j==1){
				continue;
			}
			printf("%d ",j);
		}

		printf("\n");
	}
	for(i=1;i<=n-1;i++){
		for(j=n;j>=i+1;j--){
			printf("%d ",j);
		}
		for(k=1;k<=i;k++){
			printf("  ");
		}
		for(j=1;j<i;j++){
			printf("  ");
		}
		for(j=i+1;j<=n;j++){
			printf("%d ",j);
		}

		printf("\n");
	}
}
