#include<stdio.h>
int main(){
	int n,i,j,big,small;
	int arr[10];
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	big=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>=big){
			big=arr[i];
			j=i;
		}
	}
	small=arr[0];
	for(i=0;i<n;i++){
		if(i==j){
			continue;
		}
		if(arr[i]>=small && small<=big){
			small=arr[i];
		}
	}


	printf("Product=%d\n",small*big);
}
