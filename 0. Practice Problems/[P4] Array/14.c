// Write a c program to subtract two matrices. If A and B are two matrices, the
// difference of these matrices, C = A - B.

#include <stdio.h>

int main() {
  int column, row;

  printf("Enter size of row & column: \n");
  scanf("%d%d", &row, &column);

  int arr_a[row][column];

  int arr_b[row][column];

  int sum[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Enter value of: arr_a[%d][%d]", i, j);
      scanf("%d", &arr_a[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Enter value of: arr_b[%d][%d]", i, j);
      scanf("%d", &arr_b[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      sum[i][j] = arr_a[i][j] - arr_b[i][j];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("%d \t", sum[i][j]);
      if (j + 1 == column)
        printf("\n");
    }
  }
  return 0;
}