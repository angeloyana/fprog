#include <stdio.h>

int main() {
  int next, last = 0, current = 1;
  int n, i;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Series: %d %d ", last, current);
  for (i = 0; i < n; i++) {
    next = last + current;
    last = current;
    current = next;

    printf("%d ", next);
  }

  return 0;
}
