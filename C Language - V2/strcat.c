#include<stdio.h>
#include<string.h>

main()
{
	int n;
	char name[25],name2[25];
	printf("Enter name: ");
	gets(name);
	printf("Enter name2: ");
	gets(name2);
	//printf("Combined name is: %s\n",strcat(name,name2));
	printf("Enter the number of char that needed to be copied: ");
	scanf("%d",&n);
	strncat(name,name2,n);
	printf("combined name is: %s",name);
}

