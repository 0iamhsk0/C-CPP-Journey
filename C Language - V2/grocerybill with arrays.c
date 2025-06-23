//write a program to find the grocery bill and the inputs are 
//product name, product id, product price, product quantitiy, customer name, customer id.


#include<stdio.h>
main(){
	int n,a,pid[10],pp[10],pq[n],cid[10];
	char pn[10],cn[10];
	
	printf("Enter the no. of products purchased: \n");
	scanf("%d",&n);
	printf("Enter ur name: ");
	gets(cid);
	printf("Entered name is: \n");
	puts(cid);
	fflush(stdin);
	
	printf("Enter the customer ID: ");
	scanf("%d",&cid[10]);
	for (a = 0;a < n; a++){
		
		printf("Enter the product name:\n");
		gets(pn);
		printf("Enetered product name is: \n");
		puts(pn);
		printf("\n");
		fflush(stdin);

		
		printf("Enter the product ID:\n");
		scanf("%d",&pid);
		printf("Enetered product ID is: %d\n",pid);
		fflush(stdin);



		printf("Enter the product price:\n");
		scanf("%d",&pp);
		printf("Enetered product price is: %d\n",pp);
		fflush(stdin);
		
		
		printf("Enter the product quantity:\n");
		scanf("%d",&pq);
		printf("Enetered product quantitiy is: %d\n",pq);
		fflush(stdin);
		}
}
