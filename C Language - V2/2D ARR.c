#include<stdio.h>
int main()
{ 
int a[3][3], i, j;
for(i=0; i<3; i++)
{ // for loop for rows
 for(j=0; j<3;j++)
	{ // for loop for columns
  printf("enter the value of a[%d][%d]: ", i, j);
  scanf("%d", &a[i][j]);
	} //end for columns
} //end for rows
printf("elements of 2D matrix are: \n\n");
for(i=0; i<3; i++)
{ 
 for(j=0;j<3;j++)
 	{
   printf("%d\t", a[i][j]);
 	}	//end for
 printf("\n");
} //end for
return 0;
} //end main

