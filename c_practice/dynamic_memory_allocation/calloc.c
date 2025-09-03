#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*arr;

	printf("Enter the numbers of elements:");
	scanf("%d",&n);

	arr=(int*)calloc(n,sizeof(int));

	if (arr==NULL){
		printf("memory not allocated!\n");
		return 1;
	}


	printf("Initial values:\n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}

	printf("\n");

	printf("Enter the array elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}


	printf("You entered:\n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");


	free(arr);
	return 0;
}



