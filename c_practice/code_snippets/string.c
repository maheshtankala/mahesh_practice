#include<stdio.h>
int main(){
	char str[]="mahi";
	char* ptr=str;
	int i=0;
	while(str[i]!='\0'){
		printf("%c ",*(ptr+i));
		i++;
	}
}
