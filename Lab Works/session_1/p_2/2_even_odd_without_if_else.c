#include <stdio.h>

int main() {
  int a, check;

  scanf("%d", &a);

  check = a % 2;

  switch (check) {
  case 0:
    printf("Even.");
    break;
  default:
    printf("Odd");
  }

  return 0;
}