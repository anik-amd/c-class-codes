#include <stdio.h>

int main() {
  int size, key, count = 0;

  printf("Enter size: ");
  scanf("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter key: ");
  scanf("%d", &key);

  for (int i = 0; i < size; i++) {
    if (key == arr[i]) {
      count++;
    }
  }

  if (!count) {
    printf("Not found.");
  } else {
    printf("Found %d times.", count);
  }

  return 0;
}