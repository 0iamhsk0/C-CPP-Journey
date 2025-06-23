#include <stdio.h>
void display(){
	auto int a = 1;
	static int b = 1;
	register int c = 1;
	d = 1;
	a++;
	c++;
	d++;
	printf("a is %d , b is %d , c is %d",a,b,c);
}
