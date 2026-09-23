// Count frequency of a given character in a string.

#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter the character to count: ");
    scanf(" %c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}

