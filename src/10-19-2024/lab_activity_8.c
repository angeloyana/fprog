#include <math.h>
#include <stdio.h>

int main() {
  float x;

  printf("Enter a number: ");
  scanf("%f", &x);

  printf("Absolute value: %.2f", fabs(x));
  return 0;
};
