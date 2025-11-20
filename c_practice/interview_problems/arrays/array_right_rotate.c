#include<stdio.h>
int main(){
	int i,j,n,pos,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number of positions to be rotated:");
	scanf("%d",&pos);
	for(i=0;i<pos;i++){
		temp=arr[n-1];
		for(j=n-1-1;j>=0;j--){
			arr[j+1]=arr[j];
		}
		arr[0]=temp;
	}
	printf("Printing the array elements after rotation:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

