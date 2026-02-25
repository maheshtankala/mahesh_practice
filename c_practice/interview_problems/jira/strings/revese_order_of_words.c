#include<stdio.h>
#include<string.h>

int main(){
	char str[]="mahi is good boy";
	int i,j,len;
	len=strlen(str);
	for(i=0;i<len/2;i++){
		char temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
        printf("%s\n",str);	

	i=0;
	while(i<=len){
		if(str[i]==' ' || i==len){
			j=i-1;
			while(j>=0 && str[j]!=' '){
				printf("%c",str[j]);
				j--;
			}
			printf(" ");
		}
		i++;
	}
	

}
