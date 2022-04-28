#include <stdio.h>

int main () {
    int date, day, month, year;

    scanf("%d", &date); // YYYYMMDD

    day = date % 100; // DD
    month = (date / 100) % 100; // MM
    year = (date / 10000); // YYYY

    switch (month) {
        case 01:
            printf("January %d, %d", day, year);
            break;
        case 02:
            printf("February %d, %d", day, year);
            break;
        default:
            printf("Invalid input.");
    }

    return 0;
}