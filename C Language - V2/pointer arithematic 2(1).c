#include <stdio.h>
main()
{
int *px,x,a,*pa;
	printf("Enter the number of table:");
	scanf("%d",&x);
	px=&x;
	pa=&a;
	for(*pa=1;*pa<21;*pa+=1){
		printf("%d * %d = %d\n",px,*pa,(*px) * (*pa));
	}
}
