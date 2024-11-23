#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
  int matrix[ROWS][COLS];
  int i, j, zeros = 0;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("Enter number for matrix[%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      if (matrix[i][j] == 0) {
        zeros++;
      }
    }
  }
  printf("\nCount of zeros in the matrix: %d\n", zeros);

  return 0;
}
