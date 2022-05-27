#include <stdio.h>

int main() {
  int size, key, count = 0, temp;

  printf("Enter size: ");
  scanf("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[]
      }
    }
  }

  for (int i = 0; i < size; i++) {
    printf("cpy[%d] %d. \n", i, rev[i]);
  }

  return 0;
}