#include<stdio.h>
int main(){
	int i,j,n,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
	}
	for(i=0;i<n;i++){
		if(arr[n-1]!=arr[n-1-i]){
			printf("The second largest element is %d\n",arr[n-1-i]);
		       break;
		}
	}
	return 0;
}	



