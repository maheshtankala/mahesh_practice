#include<stdio.h>
int main()
{
        int i,j,flag,n,temp;
        printf("Enter the array size:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++){
		flag=0;
                for(j=0;j<n-1-i;j++){
                        if(arr[j]>arr[j+1]){
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                                flag=1;
                        }
                }
                if(flag==0){
                        break;
                }
        }
	flag=1;
        for(i=0;i<n-1;i++){
                if(arr[i]!=arr[i+1]){
                        printf("second smallest element is:%d\n",arr[i+1]);
			flag=0;
                        break;

                }
		
        }
	if(flag==1){
		printf("All array elements are same\n");
	}

}

