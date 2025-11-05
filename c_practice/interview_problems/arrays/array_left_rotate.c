#include<stdio.h>
int main(){
	int i,j,temp,size,n;
	printf("Enter the array size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the no.of positions to be shifted:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=arr[0];
		printf("%d\n",temp);
		for(j=0;j<size-1;j++){
			arr[j]=arr[j+1];
		}
		arr[size-1]=temp;
	}

	printf("Printing the array after rotating:\n");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}

