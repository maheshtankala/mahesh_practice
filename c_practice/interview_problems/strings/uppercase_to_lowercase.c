#include<stdio.h>
int main(){
	char str[10];
	printf("Enter the string:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]+=32;
			i++;
		}
		else{
			printf("you entered invalid character %c\n",str[i]);
			return 0;
		}
	}
		printf("string after case conversion:%s\n",str);
		return 0;
		}


