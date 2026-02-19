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

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Array elements after sorting:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}


	for(i=n-1;i>=0;i--){
		if(arr[i]!=arr[i-1]){
			printf("\nsecond largest element:%d\n",arr[i-1]);
			break;
		}
	}

}


