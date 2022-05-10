// 3. Write a c program to take two arrays as input and print the combined array
// as output.

#include <stdio.h>

int main() {
  int size_1, size_2, size_result;

  printf("Enter size of array 1: ");
  scanf("%d", &size_1);

  printf("Enter size of array 2: ");
  scanf("%d", &size_2);

  size_result = size_1 + size_2;

  int result[size_result];

  for (int i = 0; i < size_1; i++) {
    printf("Enter value of array_1: [%d]", i);
    scanf("%d", &result[i]);
  }

  for (int i = size_1; i < size_result; i++) {
    printf("Enter value of array_2: [%d]", i - size_1);
    scanf("%d", &result[i]);
  }

  for (int i = 0; i < size_result; i++) {
    printf("%d \t", result[i]);
  }

  return 0;
}