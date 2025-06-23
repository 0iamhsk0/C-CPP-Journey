//wap to perform passing an entire array to a function as a parameter,passing arrays element by element using switch case
#include <stdio.h>
#include<conio.h>
void passArray(int arr[], int size) {
	int i;
    printf("Printing array elements using switch case:\n");
    for (i = 0;i < size;i++){
        switch (i) {
            case 0:
                printf("First element: %d\n", arr[i]);
                break;
            case 1:
                printf("Second element: %d\n", arr[i]);
                break;
            case 2:
                printf("Third element: %d\n", arr[i]);
                break;
            default:
                printf("Element %d: %d\n", i + 1, arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Pass entire array to function
    passArray(arr, size);

    return 0;
}
