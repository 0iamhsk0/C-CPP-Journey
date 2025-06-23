#include<stdio.h>
#include<conio.h>
int func(char ch){
	return((int)ch);
}
int main(){
	int ascii;
	char ch;
	printf("Enter the character value:");
	scanf("%c",&ch);
	ascii=func(ch);
	printf("The ascii value is: %d",ascii);
	return 0;
}
