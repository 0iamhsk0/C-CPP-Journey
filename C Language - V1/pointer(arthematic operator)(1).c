#include <stdio.h>

int main() {
    int a, b, sum, diff, product;
    float quotient;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;
    diff = *ptr1 - *ptr2;
    product = *ptr1 * *ptr2;
    quotient = (float)*ptr1 / *ptr2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
