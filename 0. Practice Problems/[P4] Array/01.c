//  Write a c program to calculate the sum and average of an array.

#include <stdio.h>

int main() {
  float sum = 0, avg;
  int size;

  printf("How many numbers to average? ");
  scanf("%d", &size);

  int n[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &n[i]);
  }

  for (int j = 0; j < size; j++) {
    sum = sum + n[j];
  }

  avg = sum / size;

  printf("%.2f", avg);

  return 0;
}