//  Write a c program to sort an array.

#include <stdio.h>

int main() {
  int size;

  printf("Enter size of array: ");
  scanf("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    printf("Enter value of array[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  for (int j = 0; j < size; j++) {
    for (int k = 0; k < size; k++) {
      // Sort in asscending order.
      if (arr[k] > arr[k + 1]) {
        int temp = arr[k];
        arr[k] = arr[k + 1];
        arr[k + 1] = temp;
      }
      // For desscending order use `if(arr[k] < arr[k+1])`.
    }
  }

  for (int l = 0; l < size; l++) {
    printf("%d \t", arr[l]);
  }

  return 0;
}

// 4, 5, 7, 3
// 4, 5, 7, 3
// 4, 5, 7, 3
// 4, 5, 3, 7
//