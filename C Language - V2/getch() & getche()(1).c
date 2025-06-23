#include <stdio.h>
main(){
	char choice;
	printf("Enter your choice: \n");
	//scanf("%c",&choice);
	choice = getchar();
	//printf("Entered choice is: %c ",choice);
	//putchar to display the value
	printf("Entered choice is: \n");

	putchar(choice);
	
	printf("\nEnter your choice : \n");
	choice = getche();
	printf("\nEntered choice is : \n");
	putch(choice);
	//takes input as a hidden character
	printf("\nEnter your choice : \n");
	choice = getch();
	printf("\nEntered choice is : \n");
	putch(choice);
	
	
}
