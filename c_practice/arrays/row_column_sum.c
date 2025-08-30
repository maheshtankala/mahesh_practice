#include<stdio.h>
int main(){
	int a[3][3]={{1,2,3},
		     {4,5,6},
		     {7,8,9}};
	int i,j;
	int sum=0;
	printf("Row total: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
		printf(" %d",sum);
		sum=0;
	}
	printf("\nColumn total: ");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			sum=sum+a[i][j];
		}
			printf(" %d",sum);
			sum=0;

		}printf("\n");
	
	return 0;
}
		
