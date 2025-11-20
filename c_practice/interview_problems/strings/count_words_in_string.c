#include<stdio.h>
int main(){
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]",str);
	int i=0,space_count=0;
	while(str[i]!='\0'){
		if(str[i]==' '){
		space_count++;
		}
		i++;
	}
	printf("Words in the given string are:%d\n",space_count+1);
}
