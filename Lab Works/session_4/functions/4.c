#include <stdio.h>

float check_grade(int mark) {
  if (mark >= 90) {
    return 4.0;
  } else if (mark >= 80) {
    return 3.5;
  } else if (mark >= 70) {
    return 3.0;
  } else if (mark >= 60) {
    return 2.5;
  } else if (mark >= 50) {
    return 2.0;
  } else {
    return 0;
  }
}

int main() {
  float grade;
  int mark;

  scanf("%d", &mark);
  grade = check_grade(mark);
  printf("%.2f", grade);

  return 0;
}