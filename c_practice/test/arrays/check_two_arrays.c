#include<stdio.h>
int main(){
	int i,j,size1,size2,count=0;

	printf("Enter the array1 size:");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter the array1 elements:");
	for(i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}

	printf("Enter the array2 size:");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter the array elements:");
	for(i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}

	if(size1!=size2){
		printf("Two arrays are not same\n");
		return 0;
	}

	for(i=0;i<size1;i++){
		for(j=0;j<size1;j++){
			if(arr1[i]==arr2[j]){
				arr2[j]=-1;
				count++;
				break;
			}
		}
		
	}
	if(count==size1){
		printf("Array1 and array2 contains same elements\n");
	}
	else{
		printf("Not same\n");
	}
}



