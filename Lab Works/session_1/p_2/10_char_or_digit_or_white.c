#include <stdio.h>

int main() {
  char a;

  scanf("%c", &a);

  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' ||
      a == 'E' || a == 'I' || a == 'O' || a == 'U') {
    printf("%c is a vowel.", a);
  } else if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z') {
    printf("%c is a consonant.", a);
  } else if (a >= '0' && a <= '9') {
    printf("%c is a digit.", a);
  } else if (a == ' ' || a == '\n' || a == '\t') {
    printf("%c is a whitespace.", a);
  } else {
    printf("%c is a special character.", a);
  }

  return 0;
}