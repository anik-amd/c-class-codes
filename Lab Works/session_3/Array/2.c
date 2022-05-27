#include <stdio.h>

int main() {
  int size, min, max, min_index = 0, max_index = 0;

  printf("Enter size: ");
  scanf("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  min = max = arr[0];

  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
      max_index = i;
    } else if (arr[i] < min) {
      min = arr[i];
      min_index = i;
    }
  }

  printf("Max is %d & index of max is %d", max, max_index);
  printf("Min is %d & index of min is %d", min, min_index);

  return 0;
}