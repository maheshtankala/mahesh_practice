#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*arr;


	printf("Enter number of Elements: ");
	scanf("%d",&n);


	arr=(int*)malloc(n* sizeof(int));


	if(arr==NULL){
		printf("Memory not allocated!\n");
		return 1;
	}


	printf("Enter the %d numbers:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}



	printf("You entered: ");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");



 	free(arr);
	return 0;
}
