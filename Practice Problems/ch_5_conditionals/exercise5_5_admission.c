#include <stdio.h>

int main()
{
    int math, phy, chem, total, total_math_phy;

    printf("Enter yours marks of Mathematics, Physics & Chemisty: ");
    scanf("%d %d %d", &math, &phy, &chem);

    total = math + chem + phy;
    total_math_phy = math + phy;

    if (math < 0 || phy < 0 || chem < 0)
    {
        printf("Invalid input.");
    }
    else
    {
        if (math >= 60 && phy >= 50 && chem >= 40 && (total >= 200 || total_math_phy >= 150))
        {
            printf("You are eligible for admission.");
        }
        else
        {
            printf("Sorry. You are not eligible for admission.");
        }
    }

    return 0;
}