#include<stdio.h>
#include<conio.h>
int main()
{
	int a=5,b;
//	printf("Enter value of a =");
//	scanf("%d",&a);
	a*= a-- + --a + a/2;
	b= ++a + a++ + a%2;
	printf("%d",a);
	printf("\n+%d",b);
//	printf("\n %d",b);
	return 0;
}
