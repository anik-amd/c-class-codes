#include <stdio.h>

int main() {
  int i, sum = 0;

  for (i = 60; i >= 0; i = i - 3) {
    sum = sum + i;
    // printf("%d + ", i);
  }

  printf("\n %d", sum);

  return 0;
}