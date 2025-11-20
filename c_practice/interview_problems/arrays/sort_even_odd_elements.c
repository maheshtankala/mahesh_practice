#include<stdio.h>
int main(){
	int i,j,n,even_count=0,odd_count=0,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int even[n],odd[n];
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even_count++;
			even[even_count-1]=arr[i];
		}
		else{
			odd_count++;
			odd[odd_count-1]=arr[i];
		}
	}
	for(i=0;i<even_count;i++){
		for(j=i+1;j<even_count;j++){
			if(even[i]>even[j]){
				temp=even[i];
				even[i]=even[j];
				even[j]=temp;
			}
		}
	}
	printf("printing sorted even elements:\n");
	for(i=0;i<even_count;i++){
		printf("%d ",even[i]);
	}
	for(i=0;i<odd_count;i++){
		for(j=i+1;j<odd_count;j++){
			if(odd[i]>odd[j]){
				temp=odd[i];
				odd[i]=odd[j];
				odd[j]=temp;
			}
		}
	}
	printf("\nprinting sorted odd eleemnts:\n");
	for(i=0;i<odd_count;i++){
		printf("%d ",odd[i]);
	}
	printf("\n");
}




