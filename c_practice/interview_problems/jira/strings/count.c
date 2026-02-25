#include<stdio.h>
int main(){
	int alphabet=0,digit=0,special=0,i=0;
	char str[]="mahesh123@gmail.com";
	while(str[i]!='\0'){
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
			alphabet++;
		}
		if(str[i]>='0' && str[i]<='9'){
			digit++;
		}
		else{
			special++;
		}
		i++;

	}
	printf("alphabet count=%d\ndigit count=%d\nspecial cahracters count=%d\n",alphabet,digit,special);
}
		
