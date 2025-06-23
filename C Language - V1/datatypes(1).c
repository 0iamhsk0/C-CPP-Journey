#include <stdio.h>
#include <conio.h>
int main(void) 
{
  int integer;
  float floatingPoint;
  char character;
  double doublePrecision;
  char str[100];

  printf("Enter an integer: ");
  scanf("%d", &integer);

  printf("Enter a floating-point number: ");
  scanf("%f", &floatingPoint);

  printf("Enter a character: ");
  scanf(" %c", &character);

  printf("Enter a double-precision number: ");
  scanf("%lf", &doublePrecision);
  
  printf("Enter a string: ");
  scanf("%s",&str);

  printf("\nYou entered: %d\n %f\n %c\n %lf\n %s\n", integer, floatingPoint, character, doublePrecision,str);
  return 0;
}

