#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,*arr;
	
	printf("Enter the number of elements:");
	scanf("%d",&n);
	

	arr=(int*)malloc(n*sizeof(int));



	printf("Enter the elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}


	printf("You entered elements:\n");
	for(int i=0;i<n;i++){
			printf("%d",arr[i]);
			}

	printf("Enter the new size:\n");
	scanf("%d",&m);
	arr=(int*)realloc(arr,m*sizeof(int));
	if(m>n){
	printf("enter %d more numbers:\n",m-n);
  	for(int i=n;i<m;i++){
	scanf("%d",&arr[i]);
	}}
	printf("\n");
	printf("Array after reallocation:");
	for(int i=0;i<m;i++){
	printf("%d",arr[i]);
	}
	 printf("\n");
 	free(arr);
 	return 0;
	}	


			
