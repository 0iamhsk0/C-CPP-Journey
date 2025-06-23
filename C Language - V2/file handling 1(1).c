#include <stdio.h>
main() {
	FILE *f1;   //the pointer holds the address of the file
	f1 = fopen("xyz.txt","w");
	char a;
	int b;

	printf("Enter any character or letter from ");
	//a = getchar();
	
	scanf("%c",&a);
	putc(a,f1);  //writes single character or letter in the file 
	printf("Enter a single digit: ");
	scanf("%d",&b);
	
	putw(b,f1);  //writes integer in the file
	fclose(f1);
}
