#include <stdio.h>

// As we don't know the array size yet so we keep it empty.

// Formal parameter.
float get_avg(float n[], int size) {
  float sum = 0, avg;
  for (int i = 0; i < size; i++) {
    sum = sum + n[i];
  }
  return avg = sum / size;
}

int main() {
  int size;
  float out;

  scanf("%d", &size);
  float n[size];

  for (int i = 0; i < size; i++) {
    scanf("%f", &n[i]);
  }

  // Actual parameter.
  out = get_avg(n, size);
  printf("%.2f", out);

  return 0;
}