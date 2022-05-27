// Swap two numbers using pointer.

#include <stdio.h>

int swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 5, b = 6;
  swap(&a, &b);
  printf("%d %d", a, b);
  return 0;
}