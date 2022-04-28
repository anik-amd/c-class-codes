// Sum of following series:
// 1 + 1/3! + 1/5! + 1/7!+ ... + 1/N!

#include <stdio.h>

int main() {
  int i, n, j;
  float sum = 0, fact = 1;

  printf("Enter value of N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i += 2) {
    for (j = 2; j <= i; j++) {
      fact = fact * j;
    }
    sum = sum + (1 / fact);
    fact = 1;
  }

  printf("%f", sum);

  return 0;
}