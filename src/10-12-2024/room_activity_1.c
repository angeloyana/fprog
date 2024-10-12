#include <stdio.h>

int computeVolume(int l, int w, int h) { return l * w * h; }

int main() {
  int length = 10, width = 10, height = 20;
  int volume;

  volume = computeVolume(length, width, height);
  printf("The volume of the object is %d\n", volume);

  return 0;
}
