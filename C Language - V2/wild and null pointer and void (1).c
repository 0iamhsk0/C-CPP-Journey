#include <stdio.h>
main()
{
	int *p;   // wild pointer
	printf("%p",p);
	p = NULL;  //becomes null pointer
	printf("\n\n%p",p);
	void* *p2;   //it is voidd pointer
	int x = 3;
	float y = 3.14;
	char z = 'A';
	p2 = &x;
	printf("\nADDRESS hold by p2: %p",p2);
	printf("\nVALUE AR ADD. hold by p2: %d",*(int *)p2);   //becomes void pointer of int type
	
	p2 = &y;
	printf("\nADDRESS hold by p2: %p",p2);
	printf("\nVALUE AR ADD. hold by p2: %d",*(float *)p2);	
}

