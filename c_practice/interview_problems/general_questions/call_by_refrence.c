#include<stdio.h>
void change(int *x){
	*x=50;
	printf("Inside the function:%d\n",*x);
}
int main(){
	int a=10;
	change(&a);
	printf("In main function:%d\n",a);
	return 0;
}
