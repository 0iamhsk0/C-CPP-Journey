#include<stdio.h>
main()
{
	FILE *f1;
	f1=fopen("xyz.txt","w");
	char a;
	int b;
	
	printf("enter any letter or character from keyboard:");
	//a=getchar();
	
	scanf("%c",&a);
	
	putc(a,f1);  //write single character or letter in the file
	printf("Enter a single digit: ");
	fflush(stdin);
	scanf("%d",&b);
	
	putw(b,f1);  //write integer in the file
	
	fclose(f1);  
	printf("\nDATA WRITTEN SUCCESSFULLY");
}
