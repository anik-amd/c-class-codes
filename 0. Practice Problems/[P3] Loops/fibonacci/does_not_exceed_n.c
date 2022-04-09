#include <stdio.h>

int main() {
  int n, a = 1, b = 2, c;

  scanf("%d", &n);

  for (int i = 1; a <= n; i++) {
    printf("%d \t", a);
    c = a + b;
    a = b;
    b = c;
  }

  return 0;
}