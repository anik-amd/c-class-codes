// Find sum of
// 1! + 2! + 3! + ... + Nth term.

#include <stdio.h>

int main() {
  int n, i, j, fact = 1, sum = 0;

  printf("Enter value of N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      for (j = 2; j <= i; j++) {
        fact = fact * j;
      }
      sum = sum + fact;
      fact = 1;
    } else {
      sum = sum + i;
    }
  }

  printf("%d", sum);

  return 0;
}