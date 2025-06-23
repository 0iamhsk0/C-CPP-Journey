#include <stdio.h>
main()
{
	int a=13,c=13,b=13,e=13,x,y;
	++a;
	c++;
	b--;
	--e;
	x = a++;
	y = ++a;
	
	printf("sol: %d",a);
	printf("sol: %d",c);
	printf("sol: %d",b);
	printf("sol: %d",e);
	printf("sol: %d",x);
	printf("sol: %d",y);
}
