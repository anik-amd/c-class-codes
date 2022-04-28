// Sum of
// 9^(-1) + 98^(-1) + 997^(-1) + 9996^(-1) + .... + Nth term.
// (10 - 1)^-1 + (100-2)^-1 + (1000-3)^-1

#include <math.h>
#include <stdio.h>

int main() {
  int n, i;
  float sum;

  printf("Enter value of N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum = sum + 1 / (pow(10, i) - i);
  }

  printf("%f", sum);
  return 0;
}