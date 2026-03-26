#include<stdio.h>
#include<string.h>
int main(){
	char str[]="Hi i am mahesh";
	int len=strlen(str);
	int start=0,right=len-1,left=0;
	while(left<right){
		char temp=str[left];
		str[left]=str[right];
		str[right]=temp;
		left++;
		right--;
	}
	printf("%s\n",str);


for(int i=0;i<=len;i++){
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




