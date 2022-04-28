// Write a c program to count the number of capital letters and small letters in
// a string.

#include <stdio.h>

int main() {
  char str[20], key;
  int count_caps = 0, count_small = 0;
  puts("Enter string: ");
  gets(str);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      count_caps++;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      count_small++;
    }
  }

  printf("Found capital letters %d time(s) & small letters %d time(s)",
         count_caps, count_small);

  return 0;
}