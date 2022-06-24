#include <stdio.h>

int main() {
  int input, last_digit, base = 1, output = 0;
  scanf("%d", &input);

  while (input != 0) {
    last_digit = input % 10;
    if (last_digit % 2 != 0) {
      output = output + base * last_digit;
      base = base * 10;
    }
    input = input / 10;
  }

  if (!output) {
    printf("NO odd digit.");
  } else {
    printf("%d", output);
  }

  return 0;
}