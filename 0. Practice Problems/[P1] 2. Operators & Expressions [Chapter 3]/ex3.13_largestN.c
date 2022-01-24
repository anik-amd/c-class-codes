// Exercise 3.13
// from chapter 3  
// of Programming in ANSI C, Balagurusamy (4th edition).

#include <stdio.h>

int main() {
	int n1, n2, n3, max;

	printf("Enter three numbers: \n");
	scanf("%d %d %d", &n1, &n2, &n3);

	max = (n1 > n2) ? n1 : n2;
	max = (max > n3) ? max : n3;

	printf("Largest number is %d", max);

	return 0;
}