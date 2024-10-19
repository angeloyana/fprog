#include <math.h>
#include <stdio.h>

int main() {
  float x;

  printf("Enter a number: ");
  scanf("%f", &x);

  printf("Ceiling: %.0f\n", ceil(x));
  return 0;
};