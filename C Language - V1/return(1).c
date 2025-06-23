#include<stdio.h>
#include<conio.h>
char func(int ascii){
	return ((char)ascii);
}
int main(){
	int ascii;
	char ch;
	printf("Enter the ascii value:");
	scanf("%d",&ascii);
	ch=func(ascii);
	printf("%The character is %c",ch);
	return 0;
}
