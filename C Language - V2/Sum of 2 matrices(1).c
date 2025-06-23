#include <stdio.h>
int main()
{
   float a[3][3], b[3][3], c[3][3];
   int i, j;
   printf("Enter elements of 1st matrix\n");
   for(i=0; i<3; i++)
   {
   for(j=0; j<3 ;j++)
    {
       printf("Enter a%d%d: ", i, j);
       scanf("%f", &a[i][j]);
    }
   }
  // Taking input using nested for loop
   printf("Enter elements of 2nd matrix\n");
   for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
    {
       printf("Enter b%d%d: ", i, j);
       scanf("%f", &b[i][j]);
    }
   }
   // adding corresponding elements of two  arrays
 for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
    {
       c[i][j] = a[i][j] + b[i][j]; 
    }
   }
   // Displaying the sum
   printf("\nSum Of Matrix:\n");

   for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
    {
       printf("%.1f\t", c[i][j]);  
    }            
          printf("\n");
    }
return 0;
}

