/*#include <stdio.h>
main()
{
	int x1, x2, x3;
	printf("Enter the values of x1 and x2\n");
	scanf("%d%d",&x1,&x2);
	x3 = x1 + x2;
	printf("The sum is:%d\n",x3);
	x3 = x1 - x2;
	printf("The diff is:%d\n",x3);
	x3 = x1 * x2;
	printf("The multip is:%d\n",x3);
	x3 = x1 / x2;
	printf("The div is:%d ",x3);
	printf("address of x1, x2 and x3 is: \n%p\n%p\n%p",&x1,&x2,&x3);
}
*///write a program to find the simple interest and make use of float data type and specifier is %f//


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float a,b;
    scanf("%d %d\n",&x,&y);
    scanf("%f %f",&a,&b);
    printf("%d %d\n",x+y,x-y);
    printf("%.1f %.1f",a+b,a-b);
    
    
    return 0;
}
