#include <stdio.h>

int main() {
    long long int nid, div, thirdDigit;

    printf("Enter nid: ");
    scanf("%lld", &nid);

    div = nid / 10000000000;
    thirdDigit = div % 10;

    printf("%d %d", div, thirdDigit);

    switch(thirdDigit) {
    case 1:
        printf("Rural area.");
        break;
    case 2:
        printf("Paurashabha.");
        break;
    case 3:
        printf("Other urban area.");
        break;
    case 4:
        printf("Other adjacent area.");
        break;
    case 5:
        printf("Cantonment area.");
        break;
    case 9:
        printf("City corporation.");
        break;
    default:
        printf("Invalid input.");
    }

    return 0;
}