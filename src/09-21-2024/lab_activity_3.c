#include <stdio.h>

int main() {
  int iter, num;
  int positive = 0, negative = 0, zero = 0;
  int i;

  printf("Enter the number of iteration: ");
  scanf("%d", &iter);

  for (i = 0; i < iter; i++) {
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
      positive++;
    } else if (num < 0) {
      negative++;
    } else {
      zero++;
    }
  }

  printf("Positive numbers: %d\n", positive);
  printf("Negative numbers: %d\n", negative);
  printf("Zero numbers: %d\n", zero);
  return 0;
}
