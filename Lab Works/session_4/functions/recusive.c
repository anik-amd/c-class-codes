#include <stdio.h>

int fact(int num) {
  if (num == 0) {
    return 1;
  } else {
    return num * fact(num - 1);
  }
}

int main() {
  int num, out;

  scanf("%d", &num);

  out = fact(num);

  printf("%d", out);
  return 0;
}