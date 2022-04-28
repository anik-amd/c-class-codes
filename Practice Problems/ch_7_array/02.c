// Write a c program to find both values and indexes of maximum and minimum
// elements of an array.

#include <stdio.h>

int main() {
  int size, min, max, min_index, max_index;

  printf("Enter size of array: ");
  scanf("%d", &size);

  int n[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &n[i]);
  }

  min = max = n[0];

  for (int j = 1; j < size; j++) {
    if (min > n[j]) {
      min = n[j];
      min_index = j;
    } else if (max < n[j]) {
      max = n[j];
      max_index = j;
    }
  }

  printf("Max is %d with index %d & min is %d with index %d.", max, max_index,
         min, min_index);

  return 0;
}