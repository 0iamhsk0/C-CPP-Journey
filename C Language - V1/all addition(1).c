//wap to perform addition of two numbers,addition of two characters and addition of two strings using switch case

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main(){
	char ch1,ch2,ch;
	int choice,num1,num2;
	char str1[20],str2[20];
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter the charcters:");
			scanf("%c\t %c",&ch1,&ch2);
			ch=ch1+ch2;
			printf("addition is:%c",ch);
			break;
		case 2:
			printf("Enter the numbers:");
			scanf("%d\t %d",&num1,&num2);
			printf("addition of num is:%d",num1+num2);
			break;
		case 3:
			printf("Enter the strings:");
			scanf("%s\t %s",&str1,&str2);
			strcat(str1,str2);
			printf("final string is:%s",str1);
			break;
		default:
			printf("invalid");
	}
}
