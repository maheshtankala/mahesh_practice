#include<stdio.h>
int main(){
	int i,a[10];
	printf("Enter the array elements:\n");
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);}
	printf("Array elements are:\n");
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}return 0;
}
