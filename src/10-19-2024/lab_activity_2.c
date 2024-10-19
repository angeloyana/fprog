#include <stdio.h>

int sum(int x, int y) { return x + y; }

int main() {
  int x, y, result;

  printf("Enter a number: ");
  scanf("%d", &x);

  printf("Enter another number: ");
  scanf("%d", &y);

  result = sum(x, y);
  printf("Sum: %d\n", result);
  return 0;
}
