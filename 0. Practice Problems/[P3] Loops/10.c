// 123 -> 321
// 1*100+2*10+3*1 -> 3*100+2*10+1*1

#include <stdio.h>

int main() {
  int n, last_digit, rev = 0;

  printf("Enter value of N: ");
  scanf("%d", &n);

  while (n != 0) {
    last_digit = n % 10;
    rev = rev * 10 + last_digit;
    n = n / 10;
  }

  printf("%d", rev);

  return 0;
}