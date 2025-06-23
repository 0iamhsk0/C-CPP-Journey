#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *table;

    printf("Enter a number: ");
    scanf("%d", &n);

    table = (int*) calloc(10, sizeof(int)); 
    if (table == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        exit(1);
    }

    for (i = 0; i < 10;i++) {
        table[i] = n * (i + 1); 
    }

    printf("Multiplication table of %d:\n", n);
    for (i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", n, i + 1, table[i]); 
    }

    free(table);

    return 0;
}


