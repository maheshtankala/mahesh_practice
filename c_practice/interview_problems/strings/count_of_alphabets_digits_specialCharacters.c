#include<stdio.h>
int main(){
	char str[200];
	int i=0,acount=0,dcount=0,scount=0;
	printf("Enter the string:");
	scanf("%[^\n]",str);
	while(str[i]!='\0'){
		if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')){
			acount++;
		}
		else if(str[i]>='0'&& str[i]<='9'){
			dcount++;
		}
		else{
			scount++;
		}
		i++;
	}
	printf("Alphabets count is:%d\nDigits count is:%d\nSpecial characters count is:%d\n",acount,dcount,scount);
}

