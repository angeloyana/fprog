#include <math.h>
#include <stdio.h>

int main() {
  float x, y;

  printf("Enter a number: ");
  scanf("%f", &x);

  printf("Enter another number: ");
  scanf("%f", &y);

  printf("Min: %.2f\n", fmin(x, y));
  printf("Max: %.2f\n", fmax(x, y));
  return 0;
};
