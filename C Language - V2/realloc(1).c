#include<stdio.h>
#include<stdlib.h> //#include<alloc.h>
main()
{
int *p, n, i;
printf("enter the number of variables: ");
scanf("%d", &n);
p=(int *)malloc(n * sizeof(int));
printf("The address hold by p is: %p\n", p);
for(i=0;i<n;i++)
{
printf("\nThe %d variable is: ", i+1);
scanf("%d", p+i);
printf("Memory Location is: %p\n", p+i);
}
printf("Want to reallocate the memory:\n"); //REALLOC - reallocates the main memory
printf("enter the number of variables: ");
scanf("%d", &n);
p=realloc(p, n * sizeof(int));
printf("The address hold by p is: %p\n", p);
for(;i<n;i++)
{
printf("\nThe %d variable is: ", i+1);
scanf("%d", p+i);
printf("Memory Location is: %p\n", p+i);
}
for(i=0;i<n;i++)
{
printf("Element is: %d\n", *(p+i));
printf("Memory Location is: %p\n", p+i);
}
free(p); //release the memory
for(i=0;i<n;i++)
{
printf("the value is %d\n", *p+i);
printf("the memory is free now %p\n", p+i);
}
}
