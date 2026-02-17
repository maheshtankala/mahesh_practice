#include<stdio.h>
int main(){
	int i,j,k,n,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Printing the sorted elements:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}


	for(i=n-1;i>=0;i--){
		if(arr[i]!=arr[i-1]){
			printf("\nsecond largest element is:%d\n",arr[i-1]);
			break;
		}
	}

}

