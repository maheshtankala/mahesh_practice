#include<stdio.h>
int main(){
	char str[100];
	int i=0,j=0,count=0,sign=0,result=0;
	printf("Enter the string:");
	scanf("%[^\n]",str);
	while(str[i]==' '){
		i++;
	}
	j=i;
	while(j<i+2){
		if(str[j]=='-' || str[j]=='+'){
			count++;
		}
		j++;
	}
	if(count==2){
		printf("%d\n",result);
		return 0;
	}
	

	while(str[i]!='\0'){
		if(str[i]=='+' || str[i]=='-' || (str[i]>='0' && str[i]<='9')){
			if(str[i]=='+'){
				sign=1;
			}
			if(str[i]=='-'){
				sign=-1;
			}
			if(str[i]>='0' && str[i]<='9'){
				result=result*10+str[i]-'0';
			}
			i++;
		}
		else{
			break;
		}
	}
	printf("%d\n",result*sign);
}
