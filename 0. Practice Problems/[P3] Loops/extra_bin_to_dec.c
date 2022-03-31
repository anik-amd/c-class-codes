#include <stdio.h>

int main() {
  int bin, dec = 0, r, multi = 1;

  printf("Enter value of binary: ");
  scanf("%d", &bin);

  while (bin != 0) {
    r = bin % 10;
    dec = dec + r * multi;
    multi = multi * 2;
    bin = bin / 10;
  }

  printf("%d", dec);

  return 0;
}