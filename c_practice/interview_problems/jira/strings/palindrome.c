#include<stdio.h>
#include<string.h>


int main(){
	char str[]="maheeham";
	int len=strlen(str);
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			printf("not palindrome\n");
			return 0;
		}
	}
	printf("palindrome\n");
}
