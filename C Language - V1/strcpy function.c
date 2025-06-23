#include<stdio.h>
#include<string.h>
void main(){
	char ori[20],dup[30];
	char *z;
	printf("\nEnter your name:");
	gets(ori);
	z=strcpy(dup,ori);
	printf("Original string is:%s",ori);
	printf("\nduplicate string is:%s",dup);
}
