#include <stdio.h>

#define ROWS 3
#define COLS 3

void printMatrix(int matrix[ROWS][COLS]) {
  int i, j;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int matrix[ROWS][COLS];
  int i, j;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("Enter number for matrix[%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\nMatrix:\n");
  printMatrix(matrix);

  return 0;
}
