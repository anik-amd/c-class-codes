#include <stdio.h>

int main() {
  int n, sum = 0;
  scanf("%d", &n);
  int j = 3;
  int k = 4;
  for (int i = 1; i <= n; i++) {
    sum = sum + i * j * k;
    j += 2;
    k += 2;
  }
  printf("%d", sum);

  return 0;
}