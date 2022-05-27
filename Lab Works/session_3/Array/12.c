#include <stdio.h>

int main() {
  int row, column;

  printf("Enter the size of row & column: ");
  scanf("%d %d", &row, &column);

  float arr[row][column];
  float trans[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Value of arr[%d][%d]", i, j);
      scanf("%f", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      trans[i][j] = arr[j][i];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("%.2f \t", trans[i][j]);
      if (j + 1 == column)
        printf("\n");
    }
  }

  return 0;
}