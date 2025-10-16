#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int *ptr=(int *)malloc(2*sizeof(int));
	if(ptr==NULL){
		printf("Memory not available");
		return 0;
	}
	printf("Enter two numbers: \n");
	for(i=0;i<2;i++){
		scanf("%d",ptr+i);
				}
	ptr=(int *)realloc(ptr,5*sizeof(int));
	if(ptr==NULL){
		printf("Memory is not available");
	 	return 0;
		}
	printf("Enter two more integers:\n");
	for(i=2;i<4;i++){
		scanf("%d",ptr+i);
		}
	printf("The total elements are:\n");
	for(i=0;i<5;i++){
		printf("%d ",*(ptr+i));
	   
   	}
	return 0;
	}	
				
