#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
  int matrix[ROWS][COLS];
  int i, j, max;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("Enter number for matrix[%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  max = matrix[0][0];
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      if (matrix[i][j] > max) {
        max = matrix[i][j];
      }
    }
  }
  printf("\nMax: %d\n", max);

  return 0;
}
