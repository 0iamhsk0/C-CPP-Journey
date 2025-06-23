#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	do{
		printf("\n %d",n);
		n--;
	}
	while(n>0);
	return 0;
}
