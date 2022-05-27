#include <stdio.h>

int main() {
  int row, column, max, min, max_index_r, max_index_c, min_index_r, min_index_c;

  printf("Enter the size of row & column: ");
  scanf("%d %d", &row, &column);

  float arr[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Value of arr[%d][%d]", i, j);
      scanf("%f", &arr[i][j]);
    }
  }

  max = min = arr[0][0];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (arr[i][j] > max) {
        max = arr[i][j];
        max_index_r = i;
        max_index_c = j;
      } else if (arr[i][j] < min) {
        min = arr[i][j];
        min_index_r = i;
        min_index_c = j;
      }
    }
  }

  printf("Max is %d at row position %d & column position %d. \n", max,
         max_index_r, max_index_c);
  printf("Min is %d at row position %d & column position %d. \n", min,
         min_index_r, min_index_c);

  return 0;
}