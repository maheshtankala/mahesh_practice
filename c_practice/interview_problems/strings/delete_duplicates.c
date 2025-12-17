#include<stdio.h>
#include<string.h>
int main(){
char str[100];
char *ptr=str;
printf("Enter the string:");
scanf("%s",ptr);
int len=strlen(ptr);
int i=0,j,x,count=0;
printf("%d",len);

while(*(ptr+i)!='\0'){
	j=i+1;
	while((*(ptr+j))!='\0'){
		if((*(ptr+i))== (*(ptr+j))){
			x=j;
			while(x!=len){
				(*(ptr+x))=(*(ptr+x+1));
				x++;
			}
			count++;
		}
		else{
		j++;
		}
	}
	i++;
}
(*(ptr+len-1-count))='\0';
printf("%s\n",ptr);
}
