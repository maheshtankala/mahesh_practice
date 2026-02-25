#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the row size:");
	scanf("%d",&n);
	char x='A';
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%c",x);
			x++;

		}
		printf("\n");
	
	}
}
			
