// Find 1001th prime number.

// 1. Take a series from 2 to n.
// 2. Take m of the series.
// 2.1. Check if m is prime.
// 2.2. If m is prime update counter by 1.
// 3. Check if ounter == 1001.
// 3.1 If so print m.

#include <stdio.h>

int main() {
  int m, i, count = 0, is_prime, prime;

  for (m = 2; count != 1001; m++) {
    is_prime = 1;
    for (i = 2; i < m; i++) {
      if (m % i == 0) {
        // printf("%d Not prime \n", m);
        is_prime = 0;
        break;
      }
    }
    if (is_prime == 1) {
      count++;
      prime = m;
      //   printf("%d is %dth prime \n", prime, count);
    }
  }

  printf("%d", prime);

  return 0;
}