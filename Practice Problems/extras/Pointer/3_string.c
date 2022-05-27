// Handling string with pointer.

#include <stdio.h>

int main() {
  char *str = "Hi mom!";

  printf("%s \n", str);        // Hi mom!
  printf("%c \n", *str);       // H
  printf("%c \n", *(str + 6)); // !

  return 0;
}