#include<stdio.h>
int main(){
	int i,j,k,n;
	int count=0;
	printf("Enter the number of Elements :");
	scanf("%d",&n);
	int temp=n;
	int arr[n];
	printf("Enter the array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	


	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n-1;k++){
					arr[k]=arr[k+1];
				}
					count++;
					n--;
					j--;
				}}}


	printf("Printing the array elements without duplicates :");
	for(i=0;i<temp-count;i++){
		printf("%d ",arr[i]);
	}
}


