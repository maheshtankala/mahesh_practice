#include<stdio.h>
int main(){
	int a,b,lcm;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	for(lcm=1;lcm<=(a*b);lcm++)
	{
		if(lcm%a==0 && lcm%b==0)
			break;}
   printf("The LCM of %d and %d is:%d\n",a,b,lcm);
	return 0;
}
