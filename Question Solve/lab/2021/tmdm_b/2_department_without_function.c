#include <stdio.h>

int main () {
    long int id, dep;

    scanf("%ld", &id);

    dep = (id / 1000) % 100; // 2020 12 023
    switch (dep) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("80");
            break;
        case 16:
        case 17:
        case 18:
        case 19:
            printf("40");
            break;
        default:
            dep = (id / 1000) % 1000; // 2020 110 034
            if (dep == 110) {
                printf("40");
            } else {
                printf("Invalid input");
            }
            break;
    }


    return 0;
}