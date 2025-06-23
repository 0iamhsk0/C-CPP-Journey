//write a program to find the length of the word without using strlen() fn:

#include<stdio.h>
#include<string.h>

main()
{
	char name[25];
	int l = 0;
	printf("Enter ur name: ");
	scanf("%[^\n]s",&name);
	while (name[l] != '\0')
	{
		l++;
	}
	printf("The length of the name is : %d",l);
}
