//wite a program to find the area of the cirlce use float data type//
#include <stdio.h>
#define pie 3.14
#include <conio.h>
int main()
{
	float r,area;
	printf("enter the value of radius:\n");
	scanf("%f",&r);
	area = (pie*r*r);
	printf("The area of the req circle is:\n%.2f",area);
}



