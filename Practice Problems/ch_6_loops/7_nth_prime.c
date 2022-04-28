// Find nth prime number...?

// 1. Take value of n.
// 2. Start a series of R to n.
//  2.1. Take m of series.
//  2.2. Check if m is prime.

#include <stdio.h>

int main() {
  int i, n, m, is_prime;

  printf("Enter value of N: ");
  scanf("%d", &n);

  // Series of R to n.
  for (m = 2; m <= n; m++) {

    // Check if m is prime.
    is_prime = 1;
    for (i = 2; i <= m / 2; i++) {
      if (m % i == 0) {
        is_prime = 0;
        break;
      }
    }

    if (is_prime) {
      printf("%d \n", m);
    }
  }

  return 0;
}