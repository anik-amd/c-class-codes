// 4. Write a c program to take a string, starting index (inclusive), and ending
// index (exclusive) as input and print the substring as output.

#include <stdio.h>

int main() {
  char str[50], res[50];
  int s, e;

  gets(str);
  scanf("%d%d", &s, &e);

  for (int i = s; i < e; i++) {
    res[i - s] = str[i];
  }

  puts(res);

  return 0;
}