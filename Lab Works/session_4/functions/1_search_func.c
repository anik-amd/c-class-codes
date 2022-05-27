#include <stdio.h>

int search_string(char str[], char key) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {
  char str[50], key;
  int index;
  puts("Enter string: ");
  gets(str);
  puts("Enter key: ");
  key = getchar();
  index = search_string(str, key);
  if (index != -1) {
    printf("%d", index);
  } else {
    printf("Not found.");
  }
  return 0;
}
