#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int row, col, max_row[MAX_ROWS], max_col[MAX_COLS];
    int matrix[MAX_ROWS][MAX_COLS];
    int num_rows, num_cols;

    // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &num_rows, &num_cols);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (row = 0; row < num_rows; row++) {
        for (col = 0; col < num_cols; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    // Find the maximum element in each row
    for (row = 0; row < num_rows; row++) {
        max_row[row] = matrix[row][0];
        for (col = 1; col < num_cols; col++) {
            if (matrix[row][col] > max_row[row]) {
                max_row[row] = matrix[row][col];
            }
        }
    }

    // Find the maximum element in each column
    for (col = 0; col < num_cols; col++) {
        max_col[col] = matrix[0][col];
        for (row = 1; row < num_rows; row++) {
            if (matrix[row][col] > max_col[col]) {
                max_col[col] = matrix[row][col];
            }
        }
    }

    // Print the maximum element in each row
    printf("The maximum element in each row is:\n");
    for (row = 0; row < num_rows; row++) {
        printf("%d\n", max_row[row]);
    }

    // Print the maximum element in each column
    printf("The maximum element in each column is:\n");
    for (col = 0; col < num_cols; col++) {
        printf("%d\n", max_col[col]);
    }

    return 0;
}

