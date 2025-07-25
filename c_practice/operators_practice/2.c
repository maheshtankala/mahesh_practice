#include<stdio.h>
int main(){
	int i;
	float f;
	double d;
	char c;
	char str[10];
	long l;
	printf("Enter integer,float,double,character,string and long integer:");
	scanf("%d %f %lf %c %s %ld",&i,&f,&d,&c,str,&l);
	printf("integer:%d\n",i);
	printf("float:%f\n",f);
	printf("double:%lf\n",d);
	printf("character:%c\n",c);
	printf("string:%s\n",str);
	printf("long double:%ld\n",l);
	return 0;
}
