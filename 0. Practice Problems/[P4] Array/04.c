// Write a c program to count the frequency of a number in an array.

#include <stdio.h>

int main() {
  int n, size, key, count = 0, j;

  printf("Enter size of array: ");
  scanf("%d", &size);

  int numbs[size];

  for (int i = 0; i < size; i++) {
    printf("Enter value of array[%d]: ", i);
    scanf("%d", &numbs[i]);
  }

  printf("Enter the number to search: ");
  scanf("%d", &key);

  for (j = 0; j < size; j++) {
    if (key == numbs[j]) {
      count++;
    }
  }

  if (count)
    printf("Frequency of %d is %d", key, count);
  else
    printf("Not found!");

  return 0;
}