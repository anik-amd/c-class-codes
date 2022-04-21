//  Write a c program to reverse an array.

#include <stdio.h>

int main() {
  int size;

  printf("Enter size of array: ");
  scanf("%d", &size);

  int numbs[size];
  int rev[size];

  for (int i = 0; i < size; i++) {
    printf("Enter value of array[%d]: ", i);
    scanf("%d", &numbs[i]);
  }

  for (int j = 0; j < size; j++) {
    rev[j] = numbs[(size - 1) - j];
  }

  for (int k = 0; k < size; k++) {
    printf("Reverse array[%d]: %d \n", k, rev[k]);
  }

  return 0;
}