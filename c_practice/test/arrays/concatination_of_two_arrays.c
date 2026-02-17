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
	for(i=0;i<size1+size2;i++){
		arr1[size1+i]=arr2[i];
	}
	printf("Printing the elements after swapping:\n");
	for(i=0;i<size1+size2;i++){
		printf("%d ",arr1[i]);
	}
}

