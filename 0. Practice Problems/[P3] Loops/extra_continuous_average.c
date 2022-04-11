// Continuously asks user input & finds average.

#include <stdio.h>

int main() {
  int ask = 1, count = 1;
  float sum = 0, n, avg;
  while (ask) {
    printf("Enter a number: ");
    scanf("\t%f", &n);

    sum = sum + n;
    avg = sum / count;

    count++;

    printf("\nContinue? (0/1) ");
    scanf("%d", &ask);
  }

  printf("Average is %.2f", avg);

  return 0;
}