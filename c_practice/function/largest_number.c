#include<stdio.h>
int large(int,int);
int main(){
	int a,b,bigger;
	printf("Enter two differnt numbers");
	scanf("%d%d",&a,&b);
bigger=large(a,b);
printf("The larger number is:%d\n",bigger);
return 0;
}
int large(int a,int b){
if(a>b)
	return a;
else
	return b;
}

	


	

