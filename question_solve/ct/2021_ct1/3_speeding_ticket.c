#include <stdio.h>

int main() {
    int speed;
    char prev_ticket;

input:
    printf("Enter vechicle speed & whether the driver has a previous speeding ticket (Y/N): ");
    scanf("%d %c", &speed, &prev_ticket);

    if(speed < 0) {
        printf("Invalid input. Please try again. \n");
        goto input;
    } else {
        if(speed < 100) {
            printf("$0");
        } else if(speed < 120 && prev_ticket == 'N' || prev_ticket == 'n') {
            printf("$50");
        } else if(speed > 120 && prev_ticket == 'N' || prev_ticket == 'n') {
            printf("$80");
        } else if(speed > 100 && prev_ticket == 'Y' || prev_ticket == 'Y') {
            printf("$150");
        } else {
            printf("Invalid input. Please try again.");
            goto input;
        }
    }

    return 0;
}