// Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Find the start of the surname
    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
            last = i + 1;
    }

    // Print initials of first and middle names
    printf("Output: %c.", name[0]);

    for(i = 1; i < last - 1; i++)
    {
        if(name[i - 1] == ' ' && name[i] != ' ')
            printf("%c.", name[i]);
    }

    // Print surname in full
    for(i = last; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}