// Write a c program to count the frequency of a character in a string.

#include <stdio.h>

int main() {
  char str[20], key;
  int count = 0;
  puts("Enter string: ");
  gets(str);
  puts("Enter key");
  key = getchar();

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == key) {
      count++;
    }
  }

  if (!count) {
    puts("Not found");
  } else {
    printf("Found %d time(s).", count);
  }

  return 0;
}