#include<stdio.h>
#include"string_length.h"
int main(){
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	printf("length of the string is:%d\n",mystrlen(str));
	return 0;
}
