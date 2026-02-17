#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,x,count1=0,count2=0;
	printf("Enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	int len=strlen(str);
	printf("%d\n",len);
	for(i=0;i<=len;i++){
		if(str[i]!=' ' && str[i]!='\0'){
		count1++;
		}
             
	
		else{
			if(count1>=count2){
	                count2=count1;
	                 x=i-1;
			}
			count1=0;
	
			
	}
	}
	
	while(x>=0 &&  str[x]!=' '){
		x--;
	}
	x++;
	while(str[x]!=' ' && str[x]!='\0'){
		printf("%c",str[x]);
		x++;
	}
}







