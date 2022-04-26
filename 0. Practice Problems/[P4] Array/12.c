//  Write a c program to transpose a matrix, i.e., A’. Given, A = {{1, 2}, {2,
//  4}}.

#include <stdio.h>

int main() {
  int row, column;

  printf("Enter size of row & column: ");
  scanf("%d%d", &row, &column);

  int arr[row][column];
  int trans[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Enter value of: arr[%d][%d]", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      trans[i][j] = arr[j][i];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("%d \t", trans[i][j]);
      if (j + 1 == column)
        printf("\n");
    }
  }

  return 0;
}