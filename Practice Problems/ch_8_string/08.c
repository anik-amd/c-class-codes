// Write a c program to copy a string to another string.

#include <stdio.h>
#include <string.h>

int main() {
  char str[40], copied[40];
  puts("Enter string: ");
  gets(str);
  strcpy(copied, str);
  puts(copied);

  return 0;
}