#include <stdio.h>

int main() {
  /**
   * This is a list of bank accounts and each account contains (accountNumber,
   * pin, balance).
   *
   * Note:
   *   This is for demonstration purpose only and it would be better to use
   *   struct for each account.
   */
  int accounts[5][3] = {{101, 1234, 1000},
                        {102, 2345, 1500},
                        {103, 3456, 1200},
                        {104, 4567, 2500},
                        {105, 5678, 800}};
  int i, accNumber, accPin, accIndex = -1;

  while (1) {
    printf("Enter your account number: ");
    scanf("%d", &accNumber);

    for (i = 0; i < 5; i++) {
      if (accounts[i][0] == accNumber) {
        accIndex = i;
      }
    }
    if (accIndex == -1) {
      printf("Account not found.\n");
      continue;
    }

    while (1) {
      printf("Enter your pin: ");
      scanf("%d", &accPin);
      if (accPin != accounts[accIndex][1]) {
        printf("Invalid password!\n");
        continue;
      } else {
        printf("Log-in success!\n\n");
        break;
      }
    }

    break;
  }

  int *account = accounts[accIndex];
  int choice, amount;
  while (1) {
    printf("Main Menu\n");
    printf("=========\n");
    printf("1. Check balance\n");
    printf("2. Deposit\n");
    printf("3. Withdrawn\n");
    printf("4. Exit\n");

    printf(">>> ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Your current balance is: %d\n\n", account[2]);
        break;

      case 2:
        printf("Enter amount: ");
        scanf("%d", &amount);

        account[2] += amount;
        printf("Successfully deposited!\n");
        printf("Your new balance is: %d\n\n", account[2]);
        break;

      case 3:
        printf("Enter amount: ");
        scanf("%d", &amount);

        if (account[2] - amount >= 0) {
          account[2] -= amount;
          printf("Successfully deposited!\n");
          printf("Your new balance is: %d\n\n", account[2]);
        } else {
          printf("Insufficient balance!\n\n");
        }
        break;

      case 4:
        printf("Closing ...\n");
        return 0;

      default:
        printf("Unknown option.\n");
    }
  }

  return 0;
}
