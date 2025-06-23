#include <stdio.h>
main()
{
	int *p,x=3;
	printf("The address of p is: %p\t",&p);

	
	printf("The address of x is: %p\n\n",&x);
	
	p = &x;  //initializing the pointer with address
	printf("The address of p is: %p\t",p);
	printf("The address hold by p is: %d\t",*p);

}


