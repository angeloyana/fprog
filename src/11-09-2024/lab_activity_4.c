#include <stdio.h>

int main() {
  int nums[10];
  int size = sizeof(nums) / sizeof(nums[0]);
  int i, sum = 0;

  for (i = 0; i < size; i++) {
    printf("Enter a number: [%d] ", i);
    scanf("%d", &nums[i]);
  }

  for (i = 0; i < size; i++) {
    sum += nums[i];
  }

  printf("Sum: %d\n", sum);
  return 0;
}
