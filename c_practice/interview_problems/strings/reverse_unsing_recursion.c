#include<stdio.h>
#include<string.h>


void rev(char str[],int len){
	if (len<=1){
	return;
	}
	char temp=str[0];
	str[0]=str[len-1];
	str[len-1]=temp;
	rev(str+1,len-2);
}


void main(){
	char str[]="mahesh";
	int len=strlen(str);
	rev(str,len);
	printf("%s\n",str);
}
