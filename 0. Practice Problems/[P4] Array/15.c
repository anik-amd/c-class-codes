// Write a c program to multiply two matrices. If A and B are two matrices, the
// product of these matrices, C = A * B. Given, A={{1, 2}, {1, 2}} and B = {{2,
// 1}, {2, 1}}.

#include <stdio.h>

int main() {
  int column, row;

  printf("Enter size of row & column: \n");
  scanf("%d%d", &row, &column);

  int arr_a[row][column];

  int arr_b[row][column];

  int prod[row][column];

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
      prod[i][j] = 0;
      for (int k = 0; k < row; k++) {
        prod[i][j] += arr_a[i][k] * arr_b[k][j];
      }
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("%d \t", prod[i][j]);
      if (j + 1 == column)
        printf("\n");
    }
  }
  return 0;
}