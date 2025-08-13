#include<stdio.h>
struct student{
	char name[20];
	int rollNo;
	float marks;
};
int main(){
	struct student s1={"Mahesh",1,23};
	printf("Name:%s\n",s1.name);
	printf("Roll No:%d\n",s1.rollNo);
	printf("Marks:%.2f\n",s1.marks);
	return 0;
}


