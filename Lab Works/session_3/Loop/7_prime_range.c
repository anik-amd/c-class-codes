#include <stdio.h>

int main() {
  int up, low, count = 0, is_prime;

  scanf("%d %d", &low, &up);

  for (int i = low; i <= up; i++) {
    is_prime = 0;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        is_prime = 1;
        break;
      }
    }

    if (!is_prime) {
      count++;
      printf("%d \n", i);
    }
  }

  if (count == 0) {
    printf("No prime numbers.");
  } else {
    printf("%d", count);
  }

  return 0;
}