#include<stdio.h>
int main(){
	char str[100];
	char *ptr=str;
	printf("Enter the string:");
	scanf("%s",ptr);
	int i=0;
	while(*(ptr+i)!='\0'){
		if((*(ptr+i))>='A' && ( *(ptr+i))<='Z'){
			(*(ptr+i))+=32;
		}
		i++;
	}
	printf("%s\n",ptr);
}
