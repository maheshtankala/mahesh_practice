#include<stdio.h>
int main(){
int n,i,y=0,x;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<32;i++){
x=(n>>i)&1;	
if(x==1){
	if(i>=y){
		y=i;
	}
}
}
printf("%d\n",y);
}

