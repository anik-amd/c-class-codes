#include <stdio.h>

int main() {
  int n, i, is_prime = 0;

  scanf("%d", &n);

  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      is_prime = 1;
      break;
    }
  }

  if (is_prime || n == 1 || n == 0) {
    printf("Not prime.");
  } else {
    printf("Prime");
  }

  return 0;
}