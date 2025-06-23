#include<stdio.h>
int main(){
	int *ptr,x=10;
	char ch='A';
	void *gp;
	gp=&x;
	printf("\n Generic pointer points to the integer values=%d",*(int*)gp);
	gp=&ch;
	printf("\nGeneric pointer points to the character=%c",*(char*)gp);
	return 0;
	
}
