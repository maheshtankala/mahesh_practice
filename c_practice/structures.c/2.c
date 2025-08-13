#include<stdio.h>
struct size{
	char a;
	int b;
	char c;
};
int main(){
	struct size s1={'z',100,'s'};
	printf("%c %d %c\n",s1.a,s1.b,s1.c);
	printf("size of struct:%zu bytes\n",sizeof(struct size));
	return 0;
}
