#include <stdio.h>

int main() {
  int n, i;
  int sum = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum += i;
  }

  printf("Total: %d\n", sum);
  return 0;
}
