#include <stdio.h>

int main() {
  float p = 0, min_cost, cost, min_p;

  min_cost = 40 - 8 * p + p * p;

  for (p = 0.1; p <= 10; p += 0.1) {
    cost = 40 - 8 * p + p * p;
    if (cost < min_cost) {
      min_cost = cost;
      min_p = p;
    }
  }

  printf("Minimum cost is %.2f & minium value of p is %.2f", min_cost, min_p);

  return 0;
}