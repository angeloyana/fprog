#include <stdio.h>

void printArray(int arr[], int size) {
  int i;

  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int nums[10];
  int size = sizeof(nums) / sizeof(nums[0]);
  int i;

  for (i = 0; i < size; i++) {
    printf("Enter a number: [%d] ", i);
    scanf("%d", &nums[i]);
  }

  for (i = 0; i < size; i++) {
    if (nums[i] % 2 != 0) {
      nums[i] = 0;
    }
  }

  printf("Numbers: ");
  printArray(nums, size);
  return 0;
}