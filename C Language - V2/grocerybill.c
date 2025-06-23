/*write a program to calculate to print the grocery bill where the customer wants 4 products in bill 
there should be product name quantitiy price top of the bill name,time 
if the customers bill > 500rs then there is a discount of 10% on the total bill*/

#include <stdio.h>
main(){
	char name[100], date[20], time[20], prod1[50], prod2[50], prod3[50], prod4[50];
	float prod_quan1, prod_quan2, prod_quan3, prod_quan4, prod_price1, prod_price2, prod_price3, prod_price4, disc, tbill;
	printf("Enter your name:");
	scanf("%[\n]s",&name[100]);
	fflush(stdin);
	printf("Enter your date of purchase:");
	fflush(stdin);
	scanf("%[\n]s",&date[20]);
	printf("Enter your time of purchase:");
	fflush(stdin);
	scanf("%[\n]s",&time[20]);
	printf("Enter your purchased product1 name, quantity and price:");
	fflush(stdin);
	scanf("%[\n]s ,%f ,%f ",&prod1[50], &prod_quan1, &prod_price1);
	fflush(stdin);
	printf("Enter your purchased product2 name, quantity and price:");
	fflush(stdin);
	scanf("%[\n]s ,%f ,%f ",&prod2[50], &prod_quan2, &prod_price2);
	fflush(stdin);
	printf("Enter your purchased product3 name, quantity and price:");
	fflush(stdin);
	scanf("%[\n]s ,%f ,%f ",&prod3[50], &prod_quan3, &prod_price3);
	printf("Enter your purchased product4 name, quantity and price:");
	fflush(stdin);
	scanf("%[\n]s ,%f ,%f ",&prod4[50], &prod_quan4, &prod_price4);
	
	printf("        ||UNI RETAIL STORE||\n");
	printf("UR NAME: %s",name);
	printf("DATE: %s , TIME: %s\n\n",date,time);
	printf("%s - *%f , PRICE: %f\n",prod1[50],prod_quan1,prod_price1*prod_quan1);
	printf("%s - *%f , PRICE: %f\n",prod2[50],prod_quan2,prod_price2*prod_quan2);
	printf("%s - *%f , PRICE: %f\n",prod3[50],prod_quan3,prod_price3*prod_quan3);
	printf("%s - *%f , PRICE: %f\n",prod4[50],prod_quan4,prod_price4*prod_quan4);

	tbill = prod_quan1 + prod_quan2 + prod_quan3 + prod_quan4;
	if (tbill>500){
		printf("Your total bill is %d/-Rs",tbill);
		printf("So your discount is 10%, so total bill is: %d",(tbill/10-tbill));
	}
	else{
		printf("Have a great day, your total bill is: %d",tbill);
	}
	//
	
	//if(total>500){
		
	//}
}
