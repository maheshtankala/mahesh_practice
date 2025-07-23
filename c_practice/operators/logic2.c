#include<stdio.h>
int main(){
	int a;
	printf("Enter the value");
	scanf("%d",&a);
if(a%2==0 || a%5==0){
printf("Yeah,got it %d\n",a);}
else{
	printf("Opps,missed%d\n",a);}
}
