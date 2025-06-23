#include<stdio.h>
#include<conio.h>
int main(){
	int num,n;
	printf("Enter the value of number:");
	scanf("%d",&num);
	for(n=num;n>0;n=--n){
		printf("\n%d",n);
	}
	return 0;
	
}
