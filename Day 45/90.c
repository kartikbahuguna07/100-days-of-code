// Toggle case of each character in a string.

#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;   // Convert uppercase to lowercase
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;   // Convert lowercase to uppercase
        }
        i++;
    }

    printf("Toggled string: %s", str);

    return 0;
}