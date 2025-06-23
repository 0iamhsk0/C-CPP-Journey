//write a program to find the factorial of any number entered by the user
#include<stdio.h>
#include<conio.h>
int main(){
	double n,i,fact=1;
	printf("Enter the value of number:");
	scanf("%lf",&n);
	for(i=n;i>=1;i--){
		fact=fact*i;
	}
	printf("The factorial of given number is = %.0lf",fact);
	return 0;
	
}
