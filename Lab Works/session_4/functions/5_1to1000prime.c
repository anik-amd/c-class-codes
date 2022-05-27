#include <stdio.h>

int is_prime(int num) {
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {

  for (int i = 0; i <= 1000; i++) {
    if (is_prime(i)) {
      printf("%d \n", i);
    }
  }

  return 0;
}