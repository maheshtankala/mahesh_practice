#include<stdio.h>
#include<string.h>


struct name{
	int a;
	char *b;
	float c;
};


int main(){
	struct name x;
	x.a=10;
	//strcpy(x.b,"mahi");
	x.b="mahi";
	x.c=22.2;
	printf("%d\n%s\n%f\n",x.a,x.b,x.c);
	printf("%ld\n",sizeof(struct name));
}


