#include <stdio.h>

int main() {
  int a, b, c; // 2, 3, 4

  scanf("%d %d", &a, &b);

  a = a + b + c; // 9
  c = a - b - c; // 9 - 3 - 4 -> 2
  b = a - b - c; // 9 - 2 - 4 -> 3
  a = a - b - c; // 9 - 3 - 2 -> 4

  printf("a: %d, b: %d, c: %d", a, b, c);

  return 0;
}
