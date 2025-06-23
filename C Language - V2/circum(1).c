/*write a program to find the circumference of the circle and use 
circumference value of the circle as side of a cube to find the cube area*/

#include <stdio.h>
#define pie 3.14
#include <conio.h>
main()
{
	float r,circum,a,areaC;
	printf("enter the value of radius:\n");
	scanf("%f",&r);
	circum = 2*pie*r;
	printf("The circumference of the req circle is:\n%.2f",circum);
	circum = a;
	areaC = 6*a*a;
	printf("The area of the cube is:\n%.2f",areaC);
}
