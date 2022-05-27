#include <stdio.h>

int main() {
  int row, column;
  float sum = 0, avg;

  printf("Enter the size of row & column: ");
  scanf("%d %d", &row, &column);

  float arr[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Value of arr[%d][%d]", i, j);
      scanf("%f", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      sum = sum + arr[i][j];
    }
  }

  avg = sum / (row * column);

  printf("Sum: %.2f & Avg: %.2f", sum, avg);

  return 0;
}