//chain of pointers or pointer to pointer

#include <stdio.h>
main()
{
	int *p1,**p2,x = 3;
	printf("Address of p1: %p",&p1);
	printf("\nAddress of p2: %p",&p2);
	printf("\nAddress of x: %p",&x);

	p1 = &x;   		//p1 holds the address of x
	p2 = &p1;		//p2 holds the address of p1
	
	printf("\n value at add. hold by p1: %d",*p1);
	printf("\n value at add. hold by p2: %d",**p1);
	
	
	
}
