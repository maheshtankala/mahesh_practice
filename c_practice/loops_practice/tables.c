 #include<stdio.h>
int main(){
	int i,a;
	printf("Enter the table you want:");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
		printf("%d x %d =%d\n",a,i,a*i);}
	return 0;
}
