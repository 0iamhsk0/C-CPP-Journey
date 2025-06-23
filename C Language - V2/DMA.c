//DYNAMIC MEMORY ALLOCATION

#include <stdlib.h>
//#include <alloc.h>
main()
{
	int *p,x;
	p = (int* )malloc(20);
	printf("address of p is = %p\n",&p);	
	printf("address hold by p is = %p",p);	
	for(x=0; x<5; x++)
	{
		printf("\nEnter the %d element: ",x+1);
		scanf("%d",p++);
		printf("\naddress of p is = %p\n",&p);	
		printf("address hold by p is = %p",p);	
	}

}
