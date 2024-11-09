#include <stdio.h>

int main() {
  int nums[10];
  int size = sizeof(nums) / sizeof(nums[0]);
  int i;

  for (i = 0; i < size; i++) {
    printf("Enter a number: [%d] ", i);
    scanf("%d", &nums[i]);
  }

  printf("Even numbers: ");
  for (i = 0; i < size; i++) {
    if (nums[i] % 2 == 0) {
      printf("%d ", nums[i]);
    }
  }
  printf("\n");

  return 0;
}