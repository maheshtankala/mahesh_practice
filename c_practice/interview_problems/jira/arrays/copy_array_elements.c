#include<stdio.h>
int main(){
        int n,i,j;
        printf("Enter the ayyay size:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }

	int copy[n];
	for(i=0;i<n;i++){
		copy[i]=arr[i];
	}
	printf("printing elements after copying:");
	for(i=0;i<n;i++){
		printf("%d ",copy[i]);
	}
}
		

