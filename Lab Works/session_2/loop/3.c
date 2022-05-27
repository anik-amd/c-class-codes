#include <stdio.h>

int main() {
  int n, sum = 0, c;
  int a = 0;
  int b = 1;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    sum = sum + a;

    c = a + b;
    a = b;
    b = c;
  }
  printf("%d", sum);

  return 0;
}