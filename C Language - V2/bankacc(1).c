/*write a program using a switch case statement in which
 we have to implement the ATM machine c1; to display the account balance;
 c2 to withdraw the money
 c3 to change the pin
 c4 to transfer money into another account*/ 
 
 
#include <stdio.h>
main(){
	long long int acc_no2[10],acc_no1[10];
	int pin,choice,epin,npin,z;
	float amount,bal,newamount;
	

	printf("Pls insert your card\n");
	printf("Pls give your valid account no:- \n");
	scanf("%lli",&acc_no1[10]);
	printf("Pls enter your account balance:- \n");
	scanf("%f",&bal);
	printf("Enter your valid 4 digit PIN:- \n");
	scanf("%d",&pin);
	printf("Enter your valid 4 digit PIN now:- \n");
	fflush(stdin);
	scanf("%d",&epin);
	
	if(epin == pin){
		printf("Select your banking method:- \n press 1: for depositing \n press 2: for withdrawing \n press 3: for check balance \n press 4: for creating new PIN \n press 5: for money transfer\n\n");
		scanf("%d",&choice);		
	}else{
		("Wrong PIN");
	}	
	switch(choice){
		case 1:
			printf("Pls Enter the amount that needed to be deposited: \n");
			scanf("%f",&amount);
			printf("Your transaction is succesful, Thank you!");
		break;
		case 2:
			printf("Pls Enter the amount that needed to be withdrawed: \n");
			scanf("%f",&amount);
			printf("Withdrawed amount is: %.2f\n",amount);
			printf("Your transaction is succesful, Thank you!\n");
		case 3:
			printf("The balance in your account is: %.2f\n",bal-amount);
		break;
		case 4:
			printf("To create a new strong PIN:\n");
			printf("Enter your previous valid 4 digit PIN:- \n");
			scanf("%d",&pin);
			printf("Enter your valid 4 digit PIN now:- \n");
			scanf("%d",&npin);
			printf("Your valid 4 digit PIN has been restted now!:- \n");

	}


}
