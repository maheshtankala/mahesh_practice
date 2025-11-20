#include<stdio.h>
int main(){
	int n,m,i,j;
	printf("Enter no.of rows:");
	scanf("%d",&n);
	printf("Enter no.of columns:");
	scanf("%d",&m);
	int arr[n][m];
	int (*ptr)[m]=arr;
	printf("Enter elements:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&ptr[i][j]);
		}
	}
	printf("printing the array elements:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",*(*(ptr+i)+j));
		}
	}
}
