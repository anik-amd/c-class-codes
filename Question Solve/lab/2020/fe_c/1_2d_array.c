#include <stdio.h>

void func(int s1, int s2, int arr[][s2], int output[][s2]) {
  for (int i = 0; i < s1; i++) {
    for (int j = 0; j < s2; j++) {
      if (arr[i][j] < 0) {
        output[i][j] = 0;
      } else {
        output[i][j] = arr[i][j];
      }
    }
  }
}

int main() {
  int s1, s2;

  printf("Row x Col: \n");
  scanf("%d %d", &s1, &s2);

  int arr[s1][s2], output[s1][s2];

  for (int i = 0; i < s1; i++) {
    for (int j = 0; j < s2; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  func(s1, s2, arr, output);

  for (int i = 0; i < s1; i++) {
    for (int j = 0; j < s2; j++) {
      printf("%d\n", output[i][j]);
    }
  }

  return 0;
}