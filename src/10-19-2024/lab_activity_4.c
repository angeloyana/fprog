#include <stdio.h>

float calculateArea(float l, float w) { return l * w; }

int main() {
  float length, width, area;

  printf("Enter the length: ");
  scanf("%f", &length);

  printf("Enter the width: ");
  scanf("%f", &width);

  area = calculateArea(length, width);
  printf("Area: %.2f\n", area);
  return 0;
};