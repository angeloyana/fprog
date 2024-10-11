#include <stdio.h>

int main() {
  int n, i;
  int even = 0, odd = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      even += i;
    } else {
      odd += i;
    }
  }

  printf("Total even: %d\n", even);
  printf("Total odd: %d\n", odd);
  return 0;
}
