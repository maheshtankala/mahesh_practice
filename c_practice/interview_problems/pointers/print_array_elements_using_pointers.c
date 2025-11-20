#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	printf("Printing the array elements:");
	for(i=0;i<n;i++){
		printf("%d ",*ptr+i);
	}
}
	

