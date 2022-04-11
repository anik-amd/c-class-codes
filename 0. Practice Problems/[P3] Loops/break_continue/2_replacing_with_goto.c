#include <stdio.h>

int main() {

  for (int i = 1; i <= 20; i++) {
    if (i % 2 == 0)
      goto next;
    if (i == 15)
      goto end;
    printf("%d \t", i);
  next:;
  }
end:;

  return 0;
}