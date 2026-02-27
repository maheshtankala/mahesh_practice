#include<stdio.h>
int main(){
        int i,j,k,n;
        printf("Enter the number: ");
        scanf("%d",&n);
        for(i=1;i<=n/2;i++){
		if(i<2){
			continue;
		}
                for(j=1;j<=n/2-i;j++){
                        printf(" ");
                }
                for(k=1;k<=2*i-1;k++){
                        printf("*");
                }
                for(int t=1;t<=2*(n/2-i);t++){
                        printf(" ");
                }
                for(int r=1;r<=2*i-1;r++){
                        printf("*");
                }
                printf("\n");
        }

        for(i=1;i<=n;i++){
                for(j=1;j<i;j++){
                        printf(" ");
                }
                for(k=1;k<=(2*n)-(2*i);k++){
                        printf("*");
                }
                printf("\n");
        }
}


