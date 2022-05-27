#include <stdio.h>

int main() {

  int min;
  int n[5];
  for (int i = 0; i < 5; i++) {
    scanf("%d", &n[i]);
  }
  min = n[0];
  for (int i = 0; i < 5; i++) {
    if (n[i] < min) {
      min = n[i];
    }
  }

  printf("%d", min);
}