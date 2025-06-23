#include<stdio.h>
int main(){
	int a;
	int *aptr;
	aptr=&a;
	printf("The address of a is %p""\nthe value of aptr is %p,&a,aptr");
	printf("\n\nThe value of a is %d""\nthe value of aptr is %p",a,*aptr);
	printf("\n\nshowing that * and & are complement of each other\n&aptr=%p""\n&aptr=%p\n",&aptr,&aptr);
	return 0;
}
