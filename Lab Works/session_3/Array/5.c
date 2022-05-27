#include <stdio.h>

int main() {
  int size, key, count = 0;

  printf("Enter size: ");
  scanf("%d", &size);

  int arr[size];
  int cpy[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++) {
    cpy[i] = arr[i];
  }

  for (int i = 0; i < size; i++) {
    printf("cpy[%d] %d. \n", i, cpy[i]);
  }

  return 0;
}