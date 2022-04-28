#include <stdio.h>

int main() {

  for (int i = 1; i <= 20; i++) {
    if (i % 2 == 0)
      continue;
    if (i == 15)
      break;
    printf("%d \t", i);
  }

  return 0;
}