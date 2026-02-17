#include<stdio.h>
int main(){
	int i,j,size1,size2,temp;

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
		printf("swapping is not possible because two arrays having different length\n");
		return 0;
	}
	for(i=0;i<size1;i++){
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
	printf("printing the arrays after swapping:\n");
	for(i=0;i<size1;i++){
		printf("%d ",arr1[i]);
	}
	printf("\n");
	for(i=0;i<size1;i++){
		printf("%d ",arr2[i]);
	}
	printf("\n");
}



