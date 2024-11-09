#include <stdio.h>

void printArray(int arr[], int size) {
  int i;

  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void sortToAscending(int arr[], int size) {
  int i, j, tmp;

  for (i = 0; i < size; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

void sortToDescending(int arr[], int size) {
  int i, j, tmp;

  for (i = 0; i < size; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

int main() {
  int nums[10];
  int size = sizeof(nums) / sizeof(nums[0]);
  int i;

  for (i = 0; i < size; i++) {
    printf("Enter a number: [%d] ", i);
    scanf("%d", &nums[i]);
  }

  printf("Original: ");
  printArray(nums, size);

  sortToAscending(nums, size);
  printf("Ascending order: ");
  printArray(nums, size);

  sortToDescending(nums, size);
  printf("Descending order: ");
  printArray(nums, size);
  return 0;
}