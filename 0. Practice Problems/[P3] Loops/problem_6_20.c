#include <stdio.h>

int main() {
  int i, n, sum;

  for (i = 1; i <= 5; i++) {
    printf("Enter value of N: ");
    scanf("%d", &n);
    if (n < 0)
      continue;
    sum = sum + n;
  }

  printf("%d", sum);

  return 0;
}