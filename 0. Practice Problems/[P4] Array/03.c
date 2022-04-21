// Write a c program to search a number in an array. It will print the index of
// the element, if it is found. Otherwise, it will print “Not found.”

#include <stdio.h>

int main() {
  int n, size, key, found = 0, j;

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
      found = 1;
      break;
    }
  }

  if (found)
    printf("Found! Index is %d", j);
  else
    printf("Not found!");

  return 0;
}