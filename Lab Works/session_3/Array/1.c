#include <stdio.h>

int main() {
  int size;
  float avg, sum = 0;

  printf("Enter size: ");
  scanf("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++) {
    sum = sum + arr[i];
  }

  avg = sum / size;
  printf("Sum: %.2f & Avg: %.2f", sum, avg);

  return 0;
}