#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	printf("%d\n",*a);
	printf("%d\n %d\n",&a[0],&a+1);
	printf("%d\n",*(&a+1));
	printf("%ld\n",*(&a+1)-a);
	return 0;
}
