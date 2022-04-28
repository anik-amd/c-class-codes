// Convert decimal number to octal.

#include <stdio.h>

int main() {
  int decimal, octal = 0, base = 1, r;

  scanf("%d", &decimal);

  while (decimal != 0) {
    r = decimal % 8;
    octal = octal + base * r;
    base = base * 10;
    decimal /= 8;
  }

  printf("%d", octal);

  return 0;
}