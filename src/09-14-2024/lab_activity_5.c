#include <stdio.h>

int main() {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  switch (age) {
    case 0:
      printf("You don't exist yet!\n");
      break;
    case 1 ... 12:
      printf("You are a child.\n");
      break;
    case 13 ... 17:
      printf("You are a teenager.\n");
      break;
    case 18 ... 29:
      printf("You are a young adult.\n");
      break;
    case 30 ... 59:
      printf("You are an adult.\n");
      break;
    default:
      printf("You are a senior.\n");
  }

  return 0;
}