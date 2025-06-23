#include <stdio.h>
 
void main ()
{
 //variable declaration
 int number[30];
 int i, j, a, n;

 //asking user to enter size of array 
 printf("Enter the value of N\n");
 scanf("%d", &n); //reading array size
 
 //asking user to enter array elements
 printf("Enter the numbers \n"); 
 for (i = 0; i < n; ++i)
  scanf("%d", &number[i]); //reading array elements

 /* Logic for sorting and checking */

 for (i = 0; i < n; ++i)
 {
   for (j = i + 1; j < n; ++j)
   {
    if (number[i] < number[j])
    {
     a = number[i];
     number[i] = number[j];
     number[j] = a;
   }
  }
 }
 
 printf("The numbers arranged in descending order are given below\n");
 for (i = 0; i < n; ++i)
 {
   printf("%d\n", number[i]); //printing numbers in descending order
 }
}
