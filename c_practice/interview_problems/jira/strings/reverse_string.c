#include<stdio.h>
#include<string.h>
int main(){
	char str[]="mahesh";
	char *ptr=str;
	int len=strlen(str);
	for(int i=0;i<len/2;i++){
		char temp=*(ptr+i);
		*(ptr+i)=*(ptr+len-i-1);
		*(ptr+len-1-i)=temp;
	}
	printf("%s\n",str);
}
