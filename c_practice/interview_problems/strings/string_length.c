#include<stdio.h>
int main(){
	char str[10];
	printf("Enter the string:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	printf("string length is:%d\n",i);
}
