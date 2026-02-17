#include<stdio.h>
int main(){
	int size,i,temp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size/2;i++){
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
	printf("Array elements after reversing:");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}


