#include <stdio.h>

int is_even(int x) { return x % 2 == 0; }

int main() {
  int x;

  printf("Enter a number: ");
  scanf("%d", &x);

  if (is_even(x)) {
    printf("%d is an even number.\n", x);
  } else {
    printf("%d is an odd number.\n", x);
  }

  return 0;
};
