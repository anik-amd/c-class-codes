#include <stdio.h>

float sum(float a, float b) {
  float c;
  c = a + b;
  return c;
}

int main() {
  float x, y, z;
  scanf("%f %f", &x, &y);
  z = sum(x, y);
  printf("%.2f", z);
  return 0;
}