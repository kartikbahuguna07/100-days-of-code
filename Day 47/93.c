// Check if two strings are anagrams of each other.

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[26] = {0};
    int i = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Count characters of first string
    while (str1[i] != '\0')
    {
        count[str1[i] - 'a']++;
        i++;
    }

    // Subtract characters of second string
    i = 0;
    while (str2[i] != '\0')
    {
        count[str2[i] - 'a']--;
        i++;
    }

    // Check frequencies
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Strings are Anagrams");
    else
        printf("Strings are Not Anagrams");

    return 0;
}