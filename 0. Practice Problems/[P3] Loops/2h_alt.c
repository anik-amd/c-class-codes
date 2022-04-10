#include <stdio.h>

int main() {
  int n, a = 1, sum = 0, i = 1;
  scanf("%d", &n);

  while (i <= n) {
    sum = sum + a;
    a += 4;
    i++;
  }

  printf("%d", sum);

  return 0;
}