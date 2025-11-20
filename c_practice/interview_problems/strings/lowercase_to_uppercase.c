#include<stdio.h>
int main(){
	char str[10];
	printf("Enter the string:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='a'&& str[i]<='z'){
			str[i]-=32;
			i++;
		}
		else{
			printf("You entered invalid character %c\n",str[i]);
			return 0;
		}	
		}
	printf("string after converting into uppercase:%s\n",str);
	return 0;
		
		

}

