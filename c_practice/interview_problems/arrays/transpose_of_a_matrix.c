#include<stdio.h>
int main(){
	int i,j,m,n;
	printf("Enter no.of rows:");
	scanf("%d",&m);
	printf("Enter no.of columns:");
	scanf("%d",&n);
	int arr[m][n];
	printf("Enter the matrix elements:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Printing the matrix after transpose:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
}

