#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter the string:");
fgets(str,100,stdin);
str[strcspn(str,"\n")]='\0';
char vis[101];
for(int i=0;i<100;i++){
	vis[i]='0';
}
vis[100]='0';
int i,j,count,len;
len=strlen(str);
for(i=0;i<len;i++){
	if(vis[i]=='0'){
		count=1;
		for(j=i+1;j<len;j++){
			if(str[i]==str[j]){
				count++;
				vis[j]='1';
			}
		}
		printf("Frequency of %c is:%d\n",str[i],count);
	}
}
}

			

