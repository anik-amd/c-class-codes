// Write a c program to check whether a string is a palindrome or not.

#include <stdio.h>
#include <string.h>

int main() {
  char str[40], temp[40];
  int c;
  puts("Enter string: ");
  gets(str);

  strcpy(temp, str);
  strrev(temp);
  c = strcmp(str, temp);

  //   printf("%d\n", c);
  if (!c) {
    puts("Palindrome!");
  } else {
    puts("Not  palindrome!");
  }

  return 0;
}