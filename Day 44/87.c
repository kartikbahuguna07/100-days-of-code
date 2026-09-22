// Count spaces , digits , and special characters in a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            spaces++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
        {
            // alphabet, do nothing
        }
        else
            special++;

        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}