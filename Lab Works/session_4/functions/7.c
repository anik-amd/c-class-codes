#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
  int c;
  char temp[50];
  strcpy(temp, str);
  strrev(temp);
  c = strcmp(str, temp);
  if (!c) {
    return 1;
  }
  return 0;
}

int main() {
  char str[50];
  gets(str);
  int c = is_palindrome(str);
  if (c) {
    printf("Palindrome.");
  } else {
    printf("Not palindrome.");
  }
  return 0;
}