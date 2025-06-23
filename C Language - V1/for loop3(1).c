#include<stdio.h>
#include<conio.h>
int main(){
	int num,n,a=1;
	printf("Enter the value of number:");
	scanf("%d",&num);
	printf("The table for the number you have given is: ");
	for(n=num;a<=10;a=++a){
		printf("\n%d * %d= %d",n,a,n*a);
	}
	return 0;
	
}
