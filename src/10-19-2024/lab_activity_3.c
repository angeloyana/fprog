#include <stdio.h>

float cm_to_inch(float cm) { return cm * 0.3937; }

int main() {
  float cm, inch;

  printf("Enter the centimeters: ");
  scanf("%f", &cm);

  inch = cm_to_inch(cm);
  printf("Inches: %.2f\n", inch);
  return 0;
};
