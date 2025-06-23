#include<stdio.h>
#include<string.h>

main()
{
	int n;
	char name[25],name2[25];
	printf("Enter name: ");
	scanf("%[^\n]s",&name);
	printf("Enter the no. of characters needed to copy in name (starting char): ");
	scanf("%d",&n);
	//strcpy(name2,name);
	//printf("The content in name2 is : %s",name2);
	
	strncpy(name2,name,n);
	name2[n] = NULL;
	printf("\nThe content in name2 is : %s",name2);
}
