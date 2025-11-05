#include<stdio.h>
int main(){
	int i,j,len,k;
	printf("Enter the length of the array:");
	scanf("%d",&len);

	int arr[len];
	printf("Enter the array elememts:");
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<len;k++){
				arr[k]=arr[k+1];
				
				
			}
				len--;
			}

		}
	}
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
}	

