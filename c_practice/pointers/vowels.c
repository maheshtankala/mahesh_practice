#include<stdio.h>
#include<string.h>
int main(){
	
	char str[]="mahesh";
	char *p=str;
	int count=0;
	while(*p!='\0'){
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'){
			printf("%c\n",*p);
			count++;
		}p++;}
	printf("\ncount=%d",count);
	return 0;
}
