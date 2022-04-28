// Write a c program to add three strings.

#include <stdio.h>
#include <string.h>

int main() {
  char str_1[40], str_2[40], str_3[40];
  puts("Enter first string: ");
  gets(str_1);
  puts("Enter second string: ");
  gets(str_2);
  puts("Enter third string: ");
  gets(str_3);

  strcat(str_1, str_2);
  strcat(str_1, str_3);
  puts(str_1);

  return 0;
}