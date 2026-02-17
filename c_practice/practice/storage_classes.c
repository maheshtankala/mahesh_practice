#include<stdio.h>
#define MAX 10

int y=20;
static int m =100;
int main(void){
	static int m=23;
	//mahesh
	int x=5;
	int a[1]={2};
#ifdef MAX
	x=x+MAX;
#else
	x=x-MAX;
#endif
	return 0;
}	
