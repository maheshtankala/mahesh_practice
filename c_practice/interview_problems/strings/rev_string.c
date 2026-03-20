#include<stdio.h>
#include<string.h>
int main(){
	int start=0,right,left,i;
	char str[]="mahesh is doing project";
	int len=strlen(str);
	for(i=0;i<len/2;i++){
		char temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
	for(i=0;i<=len;i++){
		if(str[i]==' ' || str[i]=='\0'){
			left=start;
			right=i-1;
			while(left<right){
				char temp=str[left];
				str[left]=str[right];
				str[right]=temp;
				left++;
				right--;
			}
			start=i+1;
		}
	}
	printf("%s\n",str);
}


