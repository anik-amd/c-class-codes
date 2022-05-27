#include <stdio.h>

int is_prime(int num) {
  // With flag.
  // int flag = 0;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      return 0;
      //   flag = 1;
      //   break;
    }
  }
  return 1;

  //   if (flag == 0) {
  //     return 1;
  //   } else {
  //     return 0;
  //   }
}

int main() {
  int num, out;
  scanf("%d", &num);
  out = is_prime(num);
  if (!out) {
    printf("Not prime.");
  } else {
    printf("Prime.");
  }
  return 0;
}