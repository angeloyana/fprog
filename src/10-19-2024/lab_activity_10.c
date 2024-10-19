#include <math.h>
#include <stdio.h>

int main() {
  float angle;

  printf("Enter the angle: ");
  scanf("%f", &angle);

  printf("Sine: %.2f\n", sin(angle));
  printf("Cosine: %.2f\n", cos(angle));
  printf("Tangent: %.2f\n", tan(angle));
  return 0;
}