#include <math.h>
#include <stdio.h>

int main() {
  float base, exponent;

  printf("Enter the base: ");
  scanf("%f", &base);
  printf("Enter the exponent: ");
  scanf("%f", &exponent);

  printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent,
         pow(base, exponent));
  return 0;
};
