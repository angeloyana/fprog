#include <stdio.h>

int main() {
  printf("Simple Calculator\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");

  int op;
  float num1, num2, result;

  printf("Enter your choice [1-4]: ");
  scanf("%d", &op);

  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  switch (op) {
    case 1:
      result = num1 + num2;
      break;
    case 2:
      result = num1 - num2;
      break;
    case 3:
      result = num1 * num2;
      break;
    case 4:
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator!\n");
      return 1;
  }

  printf("Result: %.2f\n", result);
  return 0;
}