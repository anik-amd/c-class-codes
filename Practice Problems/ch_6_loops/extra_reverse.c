#include <stdio.h>

int main() {
  int n = 1234, r, rev = 0;
  // Make n -> 4321
  // Here, 1234 -> 1*1000+2*100+3*10+4*1
  // And, 4321 -> 4*1000+3*100+2*10+1*1

  while (n != 0) {
    r = n % 10;
    rev = rev * 10 + r;
    n = n / 10;
  }

  printf("%d", rev);

  return 0;
}

// 1234 -> r=4 -> rev=4 -> n = 123
// 123 -> 4=3 -> rev=43 -> n = 12