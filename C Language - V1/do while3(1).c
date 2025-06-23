#include<stdio.h>
#include<conio.h>
int main(){
	int n,a=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("The table for the number you have given is: ");
	do{
		printf("\n %d * %d= %d",n,a,n*a);
		a++;
	}
	while(a<=10);
	return 0;
}
