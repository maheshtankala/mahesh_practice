#include<stdio.h>
int main(){
	int i,j,n,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("Printing the array elements after reversing:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
