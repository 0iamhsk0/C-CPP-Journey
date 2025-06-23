#include<stdio.h>
#include<string.h>
void main(){
	char str1[20],str2[20];
	int x,n;
	printf("\n Enter the string:");
	gets(str1);
	printf("\n Enter the string:");
	gets(str2);
	printf("\nEnter the number:");
	scanf("%d",&n);
	x=strncmp(str1,str2,n);
	if(x==0){
		printf("\nStrings are equal");
	}
	else if(x>0){
		printf("\nfirst is greater");
	}
	else{
		printf("\nsecond string is greater");
	}
}
