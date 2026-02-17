#include<stdio.h>
#include<string.h>
int main(){
	//char str[]="Hello";
	for(int i=0;i<=strlen("Hello");i++){
		printf("%.*s\n",i,"Hello");
	}
}

