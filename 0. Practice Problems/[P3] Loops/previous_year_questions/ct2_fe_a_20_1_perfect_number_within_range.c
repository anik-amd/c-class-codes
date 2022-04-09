// Find the perfect number within range.
// 12 ->1, 2, 3, 4, 6, 12

#include <stdio.h>

int main() {
  int upper, lower, sum;

  scanf("%d%d", &upper, &lower);
  for (int i = upper; i <= lower; i++) {
    // Check if i is perfect.
    sum = 0;
    for (int j = 1; j < i; j++) {
      if (i % j == 0) {
        sum = sum + j;
      }
    }
    if (sum == i)
      printf("%d \n", i);
  }
}