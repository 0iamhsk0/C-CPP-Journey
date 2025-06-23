#include<stdio.h>
#include<string.h>

main()
{
	char name[25];
	int l;
	printf("Enter ur name: ");
	scanf("%[^\n]s",&name);  //[^\n] is used to handle multi char with space
	l = strlen(name);
	printf("The length of the entered name is: %d\n",l);
	
	strrev(name);
	printf("Now the reversed name is: %s\n",name);
	
	strupr(name);
	printf("Now the name is in upper case: %s\n",name);
	
	strlwr(name);
	printf("Now the name is in lower case: %s\n",name);
}
