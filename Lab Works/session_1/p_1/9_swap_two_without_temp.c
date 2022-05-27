#include <stdio.h>

int main() {
  int a, b; // 2, 3

  scanf("%d %d", &a, &b);

  a = a + b; // 5
  b = a - b; // 5 - 3 -> 2
  a = a - b; // 5 - 2 -> 3

  printf("a: %d and b: %d", a, b);

  return 0;
}
