#include<stdio.h>
#include<string.h>


int main(){
	char str[]="mahesh";
	int len=strlen(str);
	char vis[len];
	int i,j,count;
	for(i=0;i<len;i++){
		vis[i]='0';
	}
	for(i=0;i<len;i++){
		if(vis[i]=='0'){
			count=1;
			{
				for(j=i+1;j<len;j++){
					if(str[i]==str[j]){
						count++;
						vis[j]='1';
					}
				}
				printf("frequency of %c is %d\n",str[i],count);
			}
		}
	}
}
