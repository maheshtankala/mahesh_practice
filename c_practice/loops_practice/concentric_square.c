#include<stdio.h>
int main(){
	int i,j,n;
	
	printf("enter the value:");
	scanf("%d",&n);
	int size=2*n-1;
	for(i=1;i<=size;i++){
		for(j=1;j<=size;j++){
			int val;
			for(int layer=1;layer<=n;layer++){
				if(i==layer||i==size-layer+1||j==layer||j==size-layer+1){
					val=n-layer+1;
					break;
				}}
			printf("%d",val);
		}
		printf("\n");
	}
	return 0;
}
