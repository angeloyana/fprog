#include <stdio.h>

float calculateAverage(int x, int y, int z) { return (x + y + z) / 3.0; }

int main() {
  int x, y, z;
  float average;

  printf("Enter a number: ");
  scanf("%d", &x);

  printf("Enter another number: ");
  scanf("%d", &y);

  printf("Enter another number: ");
  scanf("%d", &z);

  average = calculateAverage(x, y, z);
  printf("Average: %.2f\n", average);
  return 0;
};
