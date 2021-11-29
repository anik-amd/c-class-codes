// Case study 1
// from chapter 3  
// of Programming in ANSI C, Balagurusamy (4th edition).
#include <stdio.h>

int main() {
	float gross_salary, comission, bonus, quantity, unit_price;

	printf("Enter quantity: ");
	scanf("%f", &quantity);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	bonus = 200 * quantity;
	comission = unit_price * quantity * 0.02;
	gross_salary = 1500 + bonus + comission;

	printf("Bonus: %f. \n", bonus);
	printf("comission: %f. \n", comission);
	printf("Gross salary: %f. \n", gross_salary);

	return 0;
}