#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter number of elements");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		int count=1;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;}}
		if(count==2){
			printf("%d",arr[i]);}
	}}
		
	

