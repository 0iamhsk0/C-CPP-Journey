#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void multiply_matrices(int n, int a[][MAX_SIZE], int b[][MAX_SIZE], int result[][MAX_SIZE]) {
  int i, j, k;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      result[i][j] = 0;
      for (k = 0; k < n; k++) {
        result[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

int main() {
  int n, i, j;
  int a[MAX_SIZE][MAX_SIZE];
  int b[MAX_SIZE][MAX_SIZE];
  int result[MAX_SIZE][MAX_SIZE];

  printf("Enter the size of square matrices: ");
  scanf("%d", &n);

  printf("Enter elements of matrix 1:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter elements of matrix 2:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  multiply_matrices(n, a, b, result);

  printf("Resultant matrix:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}

