#include<stdio.h>
int main(){
	int i=0,result=0,sign=1;
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]",str);
	while(str[i]==' '){
		i++;
	}
	if(str[i]=='-'|| str[i]=='+'){
		if(str[i]=='-'){
			sign=-1;
		}
	
	i++;

	if(str[i]=='-' || str[i]=='+'){
		printf("%d\n",result);
		return 0;
	}
	}
	while(str[i]>='0' && str[i]<='9'){
		result=result*10+str[i]-'0';
		i++;
	}
	printf("%d\n",result*sign);
}

