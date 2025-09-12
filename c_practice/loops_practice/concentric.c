#include<stdio.h>
int main(){
	int i,j,k;
	int n;
	printf("Enter no of layers:");
	scanf("%d",&n);
	int size=2*n+1;
	for(i=1;i<=size;i++){
		for(j=1;j<=size;j++){
			int val;
			for(int layer=1;layer<=n+1;layer++){
				if(layer==i ||layer==j || i==size-layer+1 || j==size-layer+1){
				       val=n-layer+1;
			       break;
				}}
			printf("%d",val);
		}
		printf("\n");
	}}

