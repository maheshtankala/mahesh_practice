#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char sub[100];
	int len1,len2,count,k,temp;
	printf("Enter the main string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("Enter the sub string:");
        fgets(sub,100,stdin);
        sub[strcspn(sub,"\n")]='\0';
	len1=strlen(str);
	len2=strlen(sub);
	int i,j,x;
	for(i=0;i<=(len2-1)/2;i++){
		temp=sub[i];
		sub[i]=sub[len2-i-1];
		sub[len2-i-1]=temp;
	}
	//printf("%s",sub);
	



for(i=len1-1;i>=0;i--){
	 count=0,k=0;
	 
	 for(j=i;j>i-len2;j--){
		 if(str[j]==sub[k]){
			 count++;
			 k++;
			 
		 }
		 
	 }
		
	 if(count==len2){
		 printf("index value is:%d\n",i-len2);
		 x=i-len2;
	 	 break;
	 }
}
for(i=x;i<len1;i++){
	str[i]=str[i+len2+1];

}
str[len1-len2-1]='\0';
printf("%s\n",str);
}





