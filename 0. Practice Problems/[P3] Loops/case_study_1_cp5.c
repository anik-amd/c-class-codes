#include <stdio.h>

int main() {
  int ask = 1, count = 1;
  float avg, cost, min, max, range, sum = 0;

  while (ask) {
    printf("Enter cost: ");
    scanf("%f", &cost);

    if (cost < 0) {
      continue;
    }

    if (count == 1) {
      min = max = cost;
    } else if (cost < min) {
      min = cost;
    } else if (cost > max) {
      max = cost;
    }

    sum += cost;
    avg = sum / count;
    count++;

    // printf("%d", count);

    printf("Continue? (0/1)");
    scanf("%d", &ask);
  }

  range = max - min;

  printf("avg: %.2f & range: %.2f", avg, range);

  return 0;
}