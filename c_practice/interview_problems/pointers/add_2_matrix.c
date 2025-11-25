#include<stdio.h>
int main(){
	int n,m,i,j,sum=0;
	printf("Enter the no.of rows required:");
	scanf("%d",&n);
	printf("Enter the no.of columns required:");
	scanf("%d",&m);
	int arr1[n][m],arr2[n][m],arr3[n][m];
	int (*ptr1)[m]=arr1;
	int (*ptr2)[m]=arr2;
	int (*ptr3)[m]=arr3;
	printf("Enter the array-1 elements:");
	for(i=0;i<n;i++){
	     for(j=0;j<m;j++){
		scanf("%d",(*(ptr1+i)+j));
			     }
			 }
	printf("Enter the array-2 elements:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",(*(ptr2+i)+j));
				}
			}
	


	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			sum=(*(*(ptr1+i)+j))+(*(*(ptr2+i)+j));
			*(*(ptr3+i)+j)=sum;
		}
	}
	printf("Printing the 3rd array elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",*(*(ptr3+i)+j));
		}
	}
}					
			 
					

