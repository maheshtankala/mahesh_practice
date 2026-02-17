#include<stdio.h>
int main(){
int n,i,j,k,m;
printf("Enter the row size:");
scanf("%d",&n);
for(i=n;i>0;i--){
	for(j=1;j<=i;j++){
		printf("%d ",j);
	}
	for(k=1;k<=n-i;k++){
		printf("  ");
	}
	for(m=1;m<n-i;m++){
		printf("  ");
	}
	for(k=i;k>0;k--){
		if(k==n){
			continue;
		}
		printf("%d ",k);
		
	}


	printf("\n");
}
for(i=1;i<=n;i++){
	if(i==1){
		continue;
	}
	for(j=1;j<=i;j++){

		printf("%d ",j);
	}
	for(k=n-2;k>=i-1;k--){
	
		printf("  ");
	}
	for(m=n-3;m>=i-1;m--){
		printf("  ");
	}
	for(k=j-1;k>=1;k--){
		if(k==n){
			continue;
		}
		printf("%d ",k);
	}
	
	printf("\n");
}


}


