#include<stdio.h>
#include<stdio.h>
int main(){
	char str[]="mahesh sai jagga tarun hari narendra manojanna durga tagore harsha";
	int i=0,count=1;
	while(str[i]!='\0'){
		if(str[i]==' '){
			count++;
		}
		i++;
	}
	printf("%d\n",count);
}
