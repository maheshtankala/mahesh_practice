#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++){
		arr2[i]=arr1[i];
		}
	printf("Printing the array2 elements\n");
	for(i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
	return 0;
}

