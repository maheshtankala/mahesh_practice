#include<stdio.h>
int main(){
int a,count=0;
printf("Enter the number:");
scanf("%d",&a);
while(a!=0){
	count++;
	if(a&1){
		break;}
	
	a=a>>1;
}printf("%d",count);
return 0;
}
