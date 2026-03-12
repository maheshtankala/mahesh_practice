#include<stdio.h>
int main(){
	int n,i,j,count=0;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}


	for(i=0;i<n;i++){
		if(arr[i]==0){
			count++;
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(i=0;i<count;i++){
		int temp=arr[0];
		for(j=0;j<n-1;j++){
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}

	printf("Array:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}




