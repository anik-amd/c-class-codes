// Write a c program to search for a character in a string. It will print the
// index of the element, if it is found. Otherwise, it will print “Not found.”

#include <stdio.h>

int main() {
  char str[20], key;
  int inx = -1;
  puts("Enter string: ");
  gets(str);
  puts("Enter key");
  key = getchar();

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == key) {
      inx = i;
      break;
    }
  }

  if (inx == -1) {
    puts("Not found");
  } else {
    printf("Found on index %d", inx);
  }

  return 0;
}