#include <stdio.h>

int is_leap_year(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return 1;
  } else {
    return 0;
  }

  // From class:
  //   if (year % 400 == 0) {
  //     return 1;
  //   } else if (year % 100 == 0) {
  //     return 0;
  //   } else if (year % 4 == 0) {
  //     return 1;
  //   } else {
  //     return 0;
  //   }
}

int main() {
  int year, out;
  scanf("%d", &year);
  out = is_leap_year(year);
  if (out) {
    printf("Leap year.");
  } else {
    printf("Not leap year.");
  }
  return 0;
}