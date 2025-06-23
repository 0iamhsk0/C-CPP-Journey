#include <stdio.h>
#include <stdlib.h>
int main()
{
int *p,n,i;
printf("Enter the number of integers to be added:-->");
scanf("%d",&n);
p=(int *)calloc(n,sizeof(int));//malloc returns void * so we need to typcast the specific data type
if(p==NULL)

{
	printf("Memory not availiable !\n");
}


else
{

printf("\nMemory allocation was succefull");
printf("\nEnter integer values\n");
for (i=0;i<n;i++)

	{
	
	scanf("%d",p+i);
	}
	
for (i=0;i<n;i++)

	{
	
	printf("%d",*(p+i));
	}
}




return 0;
}
