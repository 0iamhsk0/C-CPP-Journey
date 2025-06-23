#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p;
    a = 10;
    p = &a; //&a = address of a
    printf("Address of p is %d\n", p);
    printf("Value at p is %d\n", *p);
    int b = 20;
    *p = b; // dereferencing(but still the address of p doesnt change)
    printf("Address of p is %d\n", p);
    printf("Value of p is %d\n", *p);
    printf("%d\n", p); // p is 2002
    printf("size of integer is %d bytes \n", sizeof(int));
    printf("Address p+1 is %d\n", p + 2);  // p+1 is 2010
    printf("Value p+1 is %d\n", *(p + 2)); // p+1 is 2010
}