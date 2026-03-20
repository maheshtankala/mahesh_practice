#include<stdio.h>

int my_atoi(char str[]){
	int i=0,result=0,sign=1;
	while(str[i]==' '){
		i++;
	}
	if(str[i]=='-' ||str[i]=='+'){
		if(str[i]=='-'){
			sign=-1;
		}
		i++;
		if(str[i]=='-' || str[i]=='+'){
			return 0;
		}
	}
	while(str[i]>='0' && str[i]<='9'){
		result=result*10+str[i]-'0';
		i++;
	}
	return result*sign;
}

int main(){
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]",str);
	int num=my_atoi(str);
	printf("%d\n",num);
}


