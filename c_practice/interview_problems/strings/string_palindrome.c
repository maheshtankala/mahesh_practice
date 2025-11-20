#include<stdio.h>
int main(){
	char str[100];
	int i=0,j=0;
	printf("Enter the string:");
	scanf("%[^\n]",str);
	while(str[i]!='\0'){
		i++;
	}
	i=i-1;
	while(i>=0){
		if(str[i]==str[j]){
			i--;
			j++;
		}
		else{
			printf("Given string is not palindrome\n");
			return 0;
		}
		if(i<0){
			printf("Given string is palindrome\n");
		}
	}
	return 0;
}
