#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			printf("  ");
		}
		for(k=1;k<=(2*(n-i)+1);k++){
			printf("%d ",i);
		}
		printf("\n");

	}
	for(i=1;i<=n-1;i++){
		for(j=1;j<n-i;j++){
			printf("  ");
		}
		for(j=1;j<=2*i+1;j++){
			printf("%d ",n-i);
		}
		
		printf("\n");
}
}
