// 5. Write a c program to count alphanumeric characters in a string. Note that
// alphanumeric characters are a combination of alphabetic and numeric
// characters. Your program will print 8 for this string "<html></html>".

#include <stdio.h>

int main() {
  char str[20], key;
  int count = 0;
  puts("Enter string: ");
  gets(str);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' ||
        str[i] >= '0' && str[i] <= '9') {
      count++;
    }
  }

  if (!count) {
    puts("No alphanumeric characters found :(");
  } else {
    printf("Found alphanumeric characters %d time(s)", count);
  }

  return 0;
}