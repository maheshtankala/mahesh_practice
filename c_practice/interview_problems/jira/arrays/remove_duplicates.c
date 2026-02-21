#include<stdio.h>
int main(){
        int n,i,j,count,k;
        printf("Enter the array size:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }


	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n-1;k++){
				arr[k]=arr[k+1];
				}
				n--;
				j--;
				
			}
		}
	}
	printf("Non duplicate elements:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}


