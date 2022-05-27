#include <stdio.h>

int main() {
  int size, key, count = 0;

  printf("Enter size: ");
  scanf("%d", &size);

  int arr[size];
  int rev[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++) {
    rev[i] = arr[(size - 1) - i];
  }

  // 1 2 3
  // rev[0] -> arr[2]

  for (int i = 0; i < size; i++) {
    printf("cpy[%d] %d. \n", i, rev[i]);
  }

  return 0;
}