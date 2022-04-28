// Triangular number till nth term & prints their sum.

#include <stdio.h>

int main() {
  int sum = 0, n = 10, value;
  for (int i = 1; i <= n; i++) {
    value = 0;
    for (int j = 1; j <= i; j++) {
      value = j + value;
    }
    printf("%d \t", value);
    sum = sum + value;
  }

  printf("\n sum = %d", sum);

  return 0;
}