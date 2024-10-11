#include <stdio.h>

int main() {
  int num;

  printf("Enter the current traffic light [1 - RED|2 - YELLOW|3 - GREEN]: ");
  scanf("%d", &num);

  switch (num) {
    case 1:
      printf("Next color: Green\n");
      break;
    case 2:
      printf("Next color: Red\n");
      break;
    case 3:
      printf("Next color: Yellow\n");
      break;
    default:
      printf("Only pick from 1 to 3!\n");
      return 1;
  }

  return 0;
}