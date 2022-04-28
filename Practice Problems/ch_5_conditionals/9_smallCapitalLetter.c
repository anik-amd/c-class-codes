// Checks whether a character is a capital letter or a small letter or others.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    // Note that single quote (' ') denotes single character & double quote denotes string.
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a capital letter.", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a small letter.", ch);
    }
    else
    {
        printf("%c is not a letter.", ch);
    }

    return 0;
}