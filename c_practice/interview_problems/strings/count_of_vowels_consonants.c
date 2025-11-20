#include<stdio.h>
int main(){
	int vcount=0,ccount=0,i=0;
	char str[100];
	char v[100],c[100];
	printf("Enter the string:");
	scanf("%s",str);
	while(str[i]!='\0'){
		if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z')){
			if(str[i]=='A' || str[i]=='E' ||str[i]=='I'||str[i]=='O' || str[i]=='U' ||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				
				 v[vcount]=str[i];
				 vcount++;
				 i++;
			}
			else{
			
				c[ccount]=str[i];
				ccount++;
				i++;
			}
		}
		
	
		
		else{
			printf("You entered invalid alphabet:%c\n",str[i]);
			return 0;
		}
		
	}
	c[ccount]='\0';
	v[vcount]='\0';
	printf("vowel count is:%d\n",vcount);
	printf("vowels in the given string are:");
	i=0;
	while(v[i]!='\0'){
		printf("%c",v[i]);
		i++;
		
	}
	printf("\n");
	printf("consonant count is:%d\n",ccount);
	printf("consonants in the given string is:");
	i=0;
	while(c[i]!='\0'){
		printf("%c",c[i]);
		i++;
	}
	printf("\n");
	 

}




