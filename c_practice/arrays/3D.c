#include<stdio.h>
int main(){
	int marks[2][3][1];
	int student,subject,exam;
	printf("Enter marks for 2 students(3 subjets each,1 eaxm each):\n");
	for(student=0;student<2;student++){
		for(subject=0;subject<3;subject++){
			for(exam=0;exam<1;exam++){
				scanf("%d",&marks[student][subject][exam]);
	              }
		}
	}
	 
	printf("\n-------marks Entered------\n");
	for(student=0;student<2;student++){
		printf("student %d:\n",student);
		for(subject=0;subject<3;subject++){
			printf("subject %d:\n",subject);
			for(exam=0;exam<1;exam++){
				printf("%d ",marks[student][subject][exam]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
