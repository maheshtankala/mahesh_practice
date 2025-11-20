#include<stdio.h>
int main(){
	int i,j,count=0,n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n-2;i++){
		if(arr[i]>arr[i+1] && arr[i+1]<arr[i+2]){
			if(arr[i]>arr[i+2]){
				count=count+(arr[i+2]-arr[i+1]);
			}
			else{
				count=count+(arr[i]-arr[i+1]);
			}
		}
	}
	printf("%d",count);
}
