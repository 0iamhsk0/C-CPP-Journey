#include<stdio.h>
int main()
{
	int i,n,fact=1;
	int *pn,*pfact;
	pn=&n;
	pfact=&fact;
	printf("\n Enter number:");
	scanf("%d",pn);
	for(i=1;i<=*pn;i++)
	{
		*pfact=*pfact*i;
	}
	printf("\n Factorial of number is:%d",*pfact);
	return 0;
}
