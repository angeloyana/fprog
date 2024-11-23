#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
  int matrix[ROWS][COLS];
  int i, j;
  int even = 0, odd = 0;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("Enter number for matrix[%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      if (matrix[i][j] % 2 == 0) {
        even++;
      } else {
        odd++;
      }
    }
  }
  printf("\nCount of even numbers in the matrix: %d\n", even);
  printf("Count of odd numbers in the matrix: %d\n", odd);

  return 0;
}
