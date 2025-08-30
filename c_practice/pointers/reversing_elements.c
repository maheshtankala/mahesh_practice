 #include<stdio.h>
void fun(int *a,int n){
	for(int i=n-1;i>=2;i--){
		int temp=*(a+(n-1-i));
		*(a+(n-1-i))=*(a+i);
		*(a+i)=temp;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
        int *p=a;
	fun(a,5);
	for(int i=0;i<5;i++){
		printf("%d",*(p+i));
	}
	printf("\n");
}

	
	
		
