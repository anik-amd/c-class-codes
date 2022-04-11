// Convert octal number to decimal number.

#include <stdio.h>

int main() {
  int octal, decimal = 0, r, base = 1;

  scanf("%d", &octal);

  while (octal != 0) {
    r = octal % 10;
    decimal = decimal + base * r;
    base *= 8;
    octal /= 10;
  }

  printf("%d", decimal);

  return 0;
}