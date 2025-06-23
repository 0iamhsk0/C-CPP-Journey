//pointer arithematic

#include <stdio.h>
main()
{
	int x,y, *px, *py,z,*pz;
	printf("Enter values of x and y: ");
	scanf("%d%d",&x,&y);
	px = &x;
	py = &y;
	pz = &z;         //  *   - indirection/derefernce operator
					//   &   - address/reference/direction operator 
	*pz = *px + *py;
	z = *px + *py;
	printf("Sum is : %d",*pz);
}
