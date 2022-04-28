// Write a c program to reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
  char str[40];
  int l;
  puts("Enter string: ");
  gets(str);
  strrev(str);
  puts(str);

  return 0;
}