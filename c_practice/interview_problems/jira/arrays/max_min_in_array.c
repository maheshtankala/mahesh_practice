#include<stdio.h>
int main(){
	int n,i,j,max,min;
	printf("Enter the ayyay size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	max=min=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("max=%d\nmin=%d\n",max,min);
}
		

