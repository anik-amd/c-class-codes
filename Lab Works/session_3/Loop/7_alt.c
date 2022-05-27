#include <stdio.h>

int main() {
  int up, low, count;

  scanf("%d %d", &low, &up);

  for (int i = low; i <= up; i++) {
    count = 0;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        count++;
        break;
      }
    }

    if (count) {
      printf("%d \n", i);
    }
  }

  if (count == 0) {
    printf("No prime numbers.");
  } else {
    printf("%d prime numbers.", count);
  }

  return 0;
}