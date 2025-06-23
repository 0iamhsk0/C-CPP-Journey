#include<stdio.h>
#include<string.h>
void main(){
	char str1[15],str2[15],str3[15];
	int n;
	printf("\nEnter the string:");
	gets(str1);
	printf("\nEnter the  string:");
	gets(str2);
	printf("\nEnter the  string:");
	gets(str3);
//	printf("Enter the number of charcaters to copy the destination:");
//	scanf("%d",&n);

	strcat(str1,str2);
	printf("first string is:%s",str1);
	strcat(str2,str3);

	printf("\nfinal string is:%s",str2);
}
