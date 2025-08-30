#include<stdio.h>
#define Max 10
int main(){
int aRows,aColumns,bRows,bColumns;
int i,j,k;
int A[Max][Max],B[Max][Max],C[Max][Max];

printf("Enter the rows and columns of first matrix(A): ");
scanf("%d %d",&aRows,&aColumns);
printf("Enter the rows and columns of second matrix(B): ");
scanf("%d %d",&bRows,&bColumns);

if(aColumns!=bRows){
	printf("Matrix multiplication is not possible!\n");
	return 0;
}

printf("Enter the elements of first matrix(A)\n");
for(i=0;i<aRows;i++){
	for(j=0;j<aColumns;j++){
		scanf("%d",&A[i][j]);
	}
}


printf("Enter the elements of second matrix(B)\n");
for(i=0;i<bRows;i++){
	for(j=0;j<bColumns;j++){
		scanf("%d",&B[i][j]);
	}
}


for(i=0;i<aRows;i++){
	for(j=0;j<bColumns;j++){
		C[i][j]=0;
	}
}

for(i=0;i<aRows;i++){
	for(j=0;j<bColumns;j++){
		for(k=0;k<aColumns;k++){
			C[i][j]+=A[i][k]*B[k][j];
		}
	}
}



printf("\n");


printf("Resultant matrix C\n");
for(i=0;i<aRows;i++){
	for(j=0;j<bColumns;j++){
		printf("%d ",C[i][j]);
	}
	printf("\n");
}
return 0;
}




