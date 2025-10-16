#include<stdio.h>
int main(){
	int i,j;
	int arr[5];
	printf("Enter the 5 array elements:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				 arr[i]=arr[j];
				arr[j]=temp;
			}}}
	for(i=4;i>=0;i--){
		if(arr[4]!=arr[i]){
			printf("%d",arr[i]);
			break;
		}}
	return 0;
}
