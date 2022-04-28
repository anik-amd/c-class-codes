// 11. Write a c program to multiply a matrix by a factor.

#include <stdio.h>

int main() {
  int row, column, fact;

  printf("Enter size of row & column: ");
  scanf("%d%d", &row, &column);

  int arr[row][column];

  printf("Enter factor: ");
  scanf("%d", &fact);

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("Enter value of: arr[%d][%d]", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      arr[i][j] = fact * arr[i][j];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("%d \t", arr[i][j]);
      if (j + 1 == column)
        printf("\n");
    }
  }

  return 0;
}

// 2 3 4 2 3 5 2 3 5
// 2 3 5
// 3 4 6
// 3 4 5

// 0,2 = 1,2 = 2,2