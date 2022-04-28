// Write a c program to calculate the length of a string.

#include <stdio.h>
#include <string.h>

int main() {
  char str[40];
  int l;
  puts("Enter string: ");
  gets(str);
  l = strlen(str);
  printf("Length: %d", l);

  return 0;
}