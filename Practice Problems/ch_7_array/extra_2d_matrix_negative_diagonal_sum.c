// Write a c program to calculate the sum of negative diagonal elements of a
// matrix.

#include <stdio.h>

int main() {
  int row, column, sum = 0;

  printf("Enter size of row & column: ");
  scanf("%d%d", &row, &column);

  int arr[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Enter value of: arr[%d][%d]", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (i + j == column - 1) {
        sum = sum + arr[i][j];
      }
    }
  }

  printf("Sum: %d", sum);

  return 0;
}