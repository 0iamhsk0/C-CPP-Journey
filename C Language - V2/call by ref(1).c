#include <stdio.h>
void display(int *x);
main(){
	int x;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	display (&x);
	printf("Value of x after change in display %d\n",x);	
}
void display(int *x){
x = x+1;
printf("Value of x: %d\n",x);
}
