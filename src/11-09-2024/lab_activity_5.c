#include <stdio.h>

int main() {
  int nums[10];
  int size = sizeof(nums) / sizeof(nums[0]);
  int i, target, isFound = 0;

  for (i = 0; i < size; i++) {
    printf("Enter a number: [%d] ", i);
    scanf("%d", &nums[i]);
  }

  printf("Target number: ");
  scanf("%d", &target);

  printf("Indices: ");
  for (i = 0; i < size; i++) {
    if (nums[i] == target) {
      printf("%d ", i);
      isFound = 1;
    }
  }

  if (!isFound) {
    printf("N/A");
  }

  return 0;
}