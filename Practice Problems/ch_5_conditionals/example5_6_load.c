#include <stdio.h>

int main()
{
    int prev_loan, prev_prev_loan, cur_loan, sanction = 0;

    printf("Enter your previous two loans: ");
    scanf("%d %d", &prev_prev_loan, &prev_loan);

    printf("Enter your current loan: ");
    scanf("%d", &cur_loan);

    if (prev_prev_loan > 0)
    {
        sanction = 0;
    }
    else if (prev_loan + cur_loan > 50000)
    {
        sanction = 50000 - prev_loan;
    }
    else
    {
        sanction = cur_loan;
    }

    printf("Sanction: %d.\n", sanction);

    return 0;
}