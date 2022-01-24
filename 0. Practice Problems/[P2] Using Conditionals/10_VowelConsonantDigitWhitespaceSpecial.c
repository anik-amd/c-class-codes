// Checks whether a character is a vowel or consonant or digit or white space or special character.

#include <stdio.h>

int main()
{

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Vowel: a, e, i, o, u.
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel.", ch);
    }
    else if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("%c is a consonant.", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit.", ch);
    }
    else if (ch == ' ' || ch == '\n' || ch == '\t')
    {
        printf("%c is a whitespace.", ch);
    }
    else
    {
        printf("%c is a special character.", ch);
    }

    return 0;
}