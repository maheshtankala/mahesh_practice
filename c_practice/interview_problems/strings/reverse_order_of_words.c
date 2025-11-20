#include<stdio.h>
int main(){
	char str[100];
	int i=0;
	printf("Enter the string:");
	scanf("%[^\n]",str);//you have to enter the space at last
	while(str[i]!='\0'){
		if(str[i]==' '){
			int j=i-1;
			while(j>=0){
				printf("%c",str[j]);
				if(str[j]==' '){
					break;
				}
				j--;
			}
			printf(" ");
		}
		i++;
	}
}
