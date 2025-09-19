#include<stdio.h>
enum ATM_options{BALANCE=1,WITHDRAW,DEPOSIT,EXIT};
int main(){
	int choice;
	int balance=1000;
	while(1){
		printf("\n ATM MENU\n");
		printf("1.Balance Inquiry\n");
		printf("2.Withdraw money\n");
		printf("3.Deposit money\n");
		printf("4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);



		switch(choice){
			case BALANCE:
				printf("Your balance = %d\n",balance);
				break;


			case WITHDRAW:{
				int amount;
				printf("Enter the amount to withdraw: ");
				scanf("%d",&amount);
				if(amount>balance){
					printf("Insufficent balance!\n");}
				else{	
				balance-=amount;
				printf("Withdraw sucessful!new balance=%d\n",balance);}
				break;
			}
			case DEPOSIT:{
				int amount;
				printf("Enter the amount to deposit:");
				scanf("%d",&amount);
				balance+=amount;
				printf("Deposit sucessful!New balance= %d\n",balance);
				break;
				     }

			case EXIT:
				printf("Thank you!visit again.\n");
   				return 0;
			default:
			   printf("Invalid choice.Try again.\n");
		} }}			   
				      	
									
					

