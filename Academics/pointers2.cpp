#include <iostream>
using namespace std;
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes/n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    // typecasting
    char *p0;
    p0 = (char *)p;
    printf("size of char is %d bytes \n", sizeof(char));
    printf("Address = %d, value = %d\n", p0 + 1, *(p0 + 1));
}