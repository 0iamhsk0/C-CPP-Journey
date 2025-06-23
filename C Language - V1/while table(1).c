//write a program to ask the user to enter any num and print the table of that number
#include<stdio.h>
#include<conio.h>
int main(){
	int num,n=1;
	printf("enter the number:");
	scanf("%d",&num);
	printf("The table for the number you have given is: ");
	while(n<=12){
		printf("\n %d * %d= %d",num,n,num*n);
		n=++n;
	}
	return 0;
}
