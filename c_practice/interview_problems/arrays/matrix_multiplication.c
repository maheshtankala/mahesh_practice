#include<stdio.h>
int main(){
	int i,j,k,m,n,sum,g,f;
	printf("Enter no.of rows of matrix-1:");
	scanf("%d",&m);
	printf("Enter no.of columns of matrix-2:");
	scanf("%d",&n);
	printf("Enter the matrix-1 elements:");
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter no.of rows of matrix-2:");
	scanf("%d",&g);
	printf("Enter no.of columns of matrix-2:");
	scanf("%d",&f);
	int b[g][f],c[m][f];
	printf("Enter the elements of matrix-2:");
	for(i=0;i<g;i++){
		for(j=0;j<f;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<f;j++){
			sum=0;
			for(k=0;k<n;k++){
				sum+=a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
	}
	printf("Printing the multiplication of 2 matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<f;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
