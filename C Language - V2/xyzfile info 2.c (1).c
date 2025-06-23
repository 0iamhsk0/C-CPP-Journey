//to read the data
#include<stdio.h>
main()
{
	char a;
	int b;
	
	FILE *f1;
	f1=fopen("xyz.txt","r");
	a=getc(f1);  //read single character or
	printf("\nThe letter or character in xyz: ");
	printf("%c",a);
	
	b=getw(f1);   //read integer from the file
	printf("\nThe single digit in xyz file is: ");
	printf("%d",b);
	fclose(f1);
}

