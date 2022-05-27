#include <stdio.h>

int count_str_cap(char str[]) {
  int count_cap = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      count_cap++;
    }
  }
  return count_cap;
}

int count_str_sm(char str[]) {
  int count_sm = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      count_sm++;
    }
  }
  return count_sm;
}

int main() {
  char str[50];
  puts("Enter string: ");
  gets(str);
  printf("caps: %d & sm: %d", count_str_cap(str), count_str_sm(str));

  return 0;
}
