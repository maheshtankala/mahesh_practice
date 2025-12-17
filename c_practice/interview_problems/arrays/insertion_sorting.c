#include<stdio.h>
int main(){
	int i,j,temp,n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
				j--;
		}
		arr[j+1]=temp;
	}
	printf("Elements after sorting:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
	

