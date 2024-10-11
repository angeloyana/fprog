#include <stdio.h>

int main() {
  char letter = 'A';

  while (letter <= 'Z') {
    printf("%c ", letter);
    letter++;
  }

  return 0;
}