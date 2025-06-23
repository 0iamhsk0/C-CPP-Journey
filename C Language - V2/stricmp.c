#include<stdio.h>
#include<string.h>

main()
{
	int n,c;
	char name[25],name2[25];
	printf("Enter name: ");
	gets(name);
	printf("Enter name2: ");
	gets(name2);
	//strcmpi() or stricmp() used to 
	//it ignores the sensitivity of cases
	c = (stricmp(name, name2));
	if(c == 0)
	printf("Strings are similar");
	else
	printf("Strings are not similar");
} 
