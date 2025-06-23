#include <stdio.h>
#include <conio.h>
main()
{
	float p,i,t,si;
	printf("enter the values of p, r and t\n");
	scanf("%f%f%f",&p,&i,&t);
	si = (p*i*t)/100;
	printf("The simple interest is:%f",si);
	printf("\nThe address of p,i,t and si is:%p %p %p.p,r,t,si");
}

