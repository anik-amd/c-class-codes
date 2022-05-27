#include <stdio.h>

int main() {
  int n, last_digit, sum = 0;

  printf("Enter value of N: ");
  scanf("%d", &n);

  while (n != 0) {
    last_digit = n % 10;
    sum = sum + last_digit;
    n = n / 10;
  }

  printf("%d", sum);

  return 0;
}