#include<stdio.h>
int main(){
int n,i,j,k,m;
printf("Enter the row size:");
scanf("%d",&n);
for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
                printf("%d ",j);
        }
        for(k=1;k<i;k++){
                printf("  ");
        }
        for(m=1;m<i-1;m++){
                printf("  ");
        }
        for(k=i;k<=n;k++){
                if(k==1){
                        continue;
                }
                printf("%d ",k);

        }


        printf("\n");
}

for(i=1;i<=n-1;i++){
        for(j=n;j>=n-i;j--){

                printf("%d ",j);
        }
        for(k=n-2;k>=i;k--){

                printf("  ");
        }
        for(m=n-3;m>=i;m--){
                printf("  ");
        }
        for(k=n-i;k<=n;k++){
		if(k==1){
			continue;
		}
                
                printf("%d ",k);
        }

        printf("\n");
}


}

