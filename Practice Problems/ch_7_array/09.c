// Write a c program to find both values and indexes of maximum and minimum
// elements of a 2D array.

#include <stdio.h>

int main() {
  int row, column, sum = 0, max, max_i, max_j, min, min_i, min_j;

  printf("Enter size of row & column: ");
  scanf("%d%d", &row, &column);

  int arr[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Enter value of: arr[%d][%d]", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  max = min = arr[0][0];
  max_i = max_j = min_i = min_j = 0;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (arr[i][j] <= min) {
        min = arr[i][j];
        min_i = i;
        min_j = j;
      } else if (arr[i][j] >= max) {
        max = arr[i][j];
        max_i = i;
        max_j = j;
      }
    }
  }

  printf("Max value: %d \n", max);
  printf("Max value found in index arr[%d][%d] \n", max_i, max_j);
  printf("Min value: %d \n", min);
  printf("Min value found in index arr[%d][%d] \n", min_i, min_j);

  return 0;
}