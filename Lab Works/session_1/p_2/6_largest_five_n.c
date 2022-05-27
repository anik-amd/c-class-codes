#include <stdio.h>

int main() {

  int max;
  int n[5];
  for (int i = 0; i < 5; i++) {
    scanf("%d", &n[i]);
  }
  max = n[0];
  for (int i = 0; i < 5; i++) {
    if (n[i] > max) {
      max = n[i];
    }
  }

  printf("%d", max);
}