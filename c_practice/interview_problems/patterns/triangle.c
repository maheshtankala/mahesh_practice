#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the row size:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		//if(i%2==0){
		//	continue;
		//}
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		for(int k=1;k<=2*i-1;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
}
