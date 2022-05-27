#include <stdio.h>

int main() {
  int size, key, index = -1;

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
      index = i;
    }
  }

  if (index == -1) {
    printf("Not found.");
  } else {
    printf("Found in index %d", index);
  }

  return 0;
}