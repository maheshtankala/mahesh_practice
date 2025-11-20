#include<stdio.h>
int main(){
	int n,i,j,k,even_count=0,odd_count=0;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int even[n],odd[n];
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even_count++;
			even[even_count-1]=arr[i];
		}
		else{
			odd_count++;
			odd[odd_count-1]=arr[i];
		}
	}
	printf("printing even array:\n");
	for(i=0;i<even_count;i++){
		printf("%d ",even[i]);
	}
	printf("\n");
	printf("printing odd array:\n");
	for(i=0;i<odd_count;i++){
		printf("%d ",odd[i]);
	}
	printf("\n");
}


