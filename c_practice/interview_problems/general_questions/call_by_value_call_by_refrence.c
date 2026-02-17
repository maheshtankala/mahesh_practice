#include<stdio.h>
void modify(int *p){
	*p=10;
}
void main(){
	int a=20;
	
	int *p=&a;
	modify(p);

	printf("%d\n",a);
}


