#include<stdio.h>
#include<string.h>
void main(){
	char str1[15],str2[15];
	int n;
	printf("\nEnter source string:");
	gets(str1);
	printf("\nEnter the destination string:");
	gets(str2);
	printf("Enter the number of charcaters to copy the destination:");
	scanf("%d",&n);
	strncpy(str1,str2,n);
	printf("Source string is:%s",str1);
	printf("Destination string is:%s",str2);
}
