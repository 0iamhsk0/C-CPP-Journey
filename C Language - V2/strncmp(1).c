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
	//for comp c variable is taken
	//comp in char by char
	printf("Enter the no of char needed to be compared: ");
	scanf("%d",&n);
	c = (strncmp(name, name2,n));
	if(c == 0)
	printf("Strings are similar");
	else
	printf("Strings are not similar");
}
