#include <stdio.h>

int main() {
  int choice;
  float amount, balance = 0;

  while (1) {
    printf("Simple Banking System\n");
    printf("1. Check balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");

    printf("Enter your choice [1-4]: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Your balance is %.2f\n\n", balance);
        break;

      case 2:
        printf("Enter the amount: ");
        scanf("%f", &amount);

        balance += amount;
        printf("Successfully deposited!\n");
        printf("Your new balance is %.2f\n\n", balance);
        break;

      case 3:
        printf("Enter the amount: ");
        scanf("%f", &amount);

        if (balance < amount) {
          printf("Insufficient balance!\n");
          printf("Your current balance is %.2f\n\n", balance);
          break;
        }

        balance -= amount;
        printf("Successfully withdrawn!\n");
        printf("Your new balance is %.2f\n\n", balance);
        break;

      case 4:
        printf("Bye.\n");
        return 0;

      default:
        printf("Invalid choice! Only pick from 1 to 4.\n\n");
    }
  }

  return 0;
}