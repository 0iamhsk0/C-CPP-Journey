#include <stdio.h>
void display(int x);
main(){
	int x;
	printf("Enter the value of x\n");
	printf("The address of x is %p\n",&x);
	scanf("%d",&x);
	display (x);
	printf("Value of x after change in display function %d\n",x);
}
void display(int x)
{
	x = x+1;
	printf("Value of x is %d\n",x);
	printf("The address of x is %p\n",&x);

}

//pointer holds the address of another values
// *a --- a is a pointer variable
