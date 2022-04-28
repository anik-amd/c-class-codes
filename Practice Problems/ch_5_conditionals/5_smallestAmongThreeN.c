// Practice problem 5.
// Finds the smallest number among three numbers.

#include <stdio.h>

int main() {
	int n1, n2, n3, min;

	printf("Enter three numbers: ");
	scanf("%d %d %d",&n1, &n2, &n3);

	min = (n1 < n2) ? n1 : n2;
	min = (min < n3) ? min : n3;

	printf("%d is the smallest number.", min);

	return 0;
}