#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Printing the negative elements in an array:\n");
	for(i=0;i<n;i++){
		if(arr[i]<0){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
