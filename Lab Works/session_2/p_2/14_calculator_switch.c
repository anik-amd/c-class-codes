#include <stdio.h>

int main() {
  float a, b, result;
  char op;

  scanf("%f %c %f", &a, &op, &b);

  switch (op) {
  case '+':
    result = a + b;
    printf("%.2f", result);
    break;

  case '-':
    result = a - b;
    printf("%.2f", result);
    break;

  case '*':
    result = a * b;
    printf("%.2f", result);
    break;

  case '/':
    if (b == 0) {
      printf("Cannot be divided by zero.");
    } else {
      result = a / b;
      printf("%.2f", result);
    }
    break;

  case '%':
    result = (int)a % (int)b;
    printf("%f", result);
    break;

  default:
    printf("Invalid Input");
  }

  return 0;
}