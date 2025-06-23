#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("Enter value of x =");
	scanf("%d",&x);
	y=--x;
	z=x--;
	printf("\n %d,%d,%d",x,y,z);
	return 0;
}
