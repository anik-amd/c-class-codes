#include <stdio.h>

int sum(int start, int n) {
  if (start > 100)
    return 0;
  return n + sum(start + 7, end);
}

int main() {
  int end, out, result;
  scanf("%d", &end);
  result = sum(7, end);
  printf("%d", result);
}