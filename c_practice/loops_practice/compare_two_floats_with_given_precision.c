#include<stdio.h>
#include<math.h>
int main(){
	float a,b,precision;
	printf("Enter two numbers and precision:");
	scanf("%f%f%f",&a,&b,&precision);
	if(fabs(a-b)<precision){
		printf("within the precision.\n");
	}
	else{
		printf("not within the precision.\n");
	}
	return 0;
}


