#include <stdio.h>

int sum(int n) {
  if (n == 1)
    return 1;
  return n + sum(n - 2);
}

int main() {
  int input, result;
  scanf("%d", &input);
  result = sum(input);
  printf("%d", result);
  return 0;
}