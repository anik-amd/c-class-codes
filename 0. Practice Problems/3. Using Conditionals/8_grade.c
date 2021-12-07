// Practice problem 8.
// Calculates the grade points from mark.

#include <stdio.h>

int main() {
	float mark, grade;

	printf("Enter mark: ");
	scanf("%f", &mark);

	if (mark > 100) {
		printf("Invalid input!\n");
	} else {
		if (mark >= 90 && mark <= 100) {
		grade = 4;
	} else if (mark >= 80) {
		grade = 3.5;
	} else if (mark >= 70) {
		grade = 3.0;
	} else if (mark >= 60) {
		grade = 2.5;
	} else if (mark >= 50) {
		grade = 2.0;
	} else {
		grade = 0;
	}

	printf("Grade is %f. \n", grade);
	}

	return 0;
}
