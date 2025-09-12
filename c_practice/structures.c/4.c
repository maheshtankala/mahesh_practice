#include<stdio.h>
struct student {
	char name[20];
	int rollno;
	int rank;
};
int main(){
	int n,i,top=0;
	printf("Enter no of students:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("Enter the details of the student%d:",i);
		printf("Name: ");
		scanf("%s",s[i].name);
		printf("Rollno: ");
		scanf("%d",&s[i].rollno);
		printf("Rank: ");
		scanf("%d",&s[i].rank);
	if(s[i].rank>s[top].rank){
		top=i;
	}
	}
	for(i=0;i<n;i++){
		printf("Name:%s\n",s[i].name);
		printf("rollno:%d\n",s[i].rollno);
		printf("rank:%d\n",s[i].rank);
	}
	printf("Least ranked student\n");
	printf("%s\n%d\n%d\n",s[top].name,s[top].rollno,s[top].rank);
}
