#include <stdio.h>

int main() {
  int n, is_prime = 1, i = 2;

  scanf("%d", &n);

  while (i <= n / 2) {
    if (n % i == 0) {
      is_prime = 0;
      break;
    }
    i++;
    printf("%d", i);
  }

  if (n == 0 || n == 1) {
    printf("Not prime.");
  } else if (is_prime) {
    printf("Prime.");
  } else {
    printf("Not prime :/");
  }

  return 0;
}