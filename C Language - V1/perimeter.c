#include <stdio.h>
#include <conio.h>
int main() {
    int height = 7, width = 5, perimeter, area;

    perimeter = 2 * (height + width);
    area = height * width;

    printf("Perimeter of rectangle: %d inches\n", perimeter);
    printf("Area of rectangle: %d square inches\n", area);

    return 0;
}

