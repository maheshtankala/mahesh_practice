#include<stdio.h>
int main(){
	int m,n,i,j;
	printf("Enter no.of rows in the matrix:");
        scanf("%d",&m);
	printf("Enter the no.of columns in the matrix:");
	scanf("%d",&n);
	int a[m][n],b[m][n],c[m][n];
	printf("Enter the matrix-1 elements:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the matrix-2 elements:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Printing sum of matrix-1 and matrix-2:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}


