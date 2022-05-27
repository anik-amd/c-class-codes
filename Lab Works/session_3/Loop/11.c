#include <stdio.h>

int main() {
  int n, last_digit, rev = 0, temp;

  printf("Enter value of N: ");
  scanf("%d", &n);

  temp = n;
  while (temp != 0) {
    last_digit = temp % 10;
    rev = rev * 10 + last_digit;
    temp = temp / 10;
  }

  if (rev == n) {
    printf("Palindrome.");
  } else {
    printf("Not palindrome.");
  }

  return 0;
}