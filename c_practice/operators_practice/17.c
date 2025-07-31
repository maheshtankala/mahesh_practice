#include<stdio.h>
int main(){
	int sub1,sub2,sub3,sub4,sub5;
	float total,avg,percent;
	printf("Enter the marks of 5 subjects:");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	avg=total/5;
	percent=(total/500)*100;
	printf("total marks=%.2f\n avg marks=%.2f\n percentage=%.2f\n",total,avg,percent);
	return 0;
}

