#include<stdio.h>
int main(){
        int i,j,n;
        printf("Enter the array size:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }

	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}

	printf("printing elements after sorting:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
