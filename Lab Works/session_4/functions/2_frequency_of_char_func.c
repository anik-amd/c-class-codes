#include <stdio.h>

int frq_string(char str[], char key) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == key) {
      count++;
    }
  }
  return count;
}

int main() {
  char str[50], key;
  puts("Enter string: ");
  gets(str);
  puts("Enter key: ");

  key = getchar();
  printf("%d", frq_string(str, key));

  return 0;
}
