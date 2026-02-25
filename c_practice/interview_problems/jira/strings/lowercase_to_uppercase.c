#include<stdio.h>
#include<string.h>
int main(){
	char str[]="mahesh";
	int i=0;
	while(str[i]!='\0'){
		str[i]-=32;
	
		i++;
	}
	printf("%s\n",str);
}
