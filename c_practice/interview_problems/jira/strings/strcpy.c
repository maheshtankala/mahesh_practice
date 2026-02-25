#include<stdio.h>
#include<string.h>
int main(){
	char str[]="mahesh";
	int len=strlen(str);
	char cpy[len];
	int i=0;
	while(str[i]!='\0'){
		cpy[i]=str[i];
		i++;
	}
//	cpy[i]='\0';
	printf("%s\n",cpy);
}
