#include<stdio.h>
int main(){
	char str[10];
	printf("Enter the string:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]+=32;
			printf("%c",str[i]);
		}
		else if(str[i]>='a' && str[i]<='z'){
			str[i]-=32;
			printf("%c",str[i]);
		}
		else{
			printf(" You entered invalid character:%c ",str[i]);
		}
		i++;
	}
}

