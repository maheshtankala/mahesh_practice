#include<stdio.h>
int main(){
	int n,p,i;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	printf("Enter no of positions to shift:");
	scanf("%d",&p);

	int temp[p];
	for(i=0;i<p;i++){
		temp[i]=arr[i];
	}
	for(i=0;i<n-p;i++){
		arr[i]=arr[p+i];
	}
	for(i=0;i<p;i++){
		arr[n-p+i]=temp[i];
	}
	printf("Array after rotating:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}}


