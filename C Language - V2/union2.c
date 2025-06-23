#include <stdio.h>
union details
{
    int a;
    float b;
    char c;
    }d;
main()
{
    printf("enter a: ");
    scanf("%d",&d.a);
    printf("enter b: ");
    scanf("%f",&d.b);
    printf("Enter c: ");
    fflush(stdin);
    scanf("%c",&d.c);
    printf("size is %d",sizeof(d));
    printf("The variable are : %d\n%f\n%c",d.a,d.b,d.c);
}
