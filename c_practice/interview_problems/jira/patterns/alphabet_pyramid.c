#include<stdio.h>
int main(){
	int i,j,k,n,m;
	printf("Enter the row size:");
	scanf("%d",&n);
	char x='A';
	for(i=0;i<n;i++){
		x='A';
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%c",x);
			x++;
		}
	
		for(m=k-2;m>=0;m--){
			//x='A'+m;
			printf("%c",'A'+m);
			x--;
		}

		printf("\n");
	}
}

