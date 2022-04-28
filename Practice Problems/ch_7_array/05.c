//  Write a c program to copy an array to another array.

#include <stdio.h>

int main() {
  int size;

  printf("Enter size of array: ");
  scanf("%d", &size);

  int numbs[size];
  int copy[size];

  for (int i = 0; i < size; i++) {
    printf("Enter value of array[%d]: ", i);
    scanf("%d", &numbs[i]);
  }

  for (int j = 0; j < size; j++) {
    copy[j] = numbs[j];
  }

  for (int k = 0; k < size; k++) {
    printf("Copied array[%d]: %d \n", k, copy[k]);
  }

  return 0;
}