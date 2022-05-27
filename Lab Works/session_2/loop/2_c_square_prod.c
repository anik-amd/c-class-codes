#include <stdio.h>

int main() {
  int n, prod = 1;
  scanf("%d", &n);
  for (int i = 2; i <= n; i += 2) {
    prod = prod * i * i;
  }
  printf("%d", prod);

  return 0;
}