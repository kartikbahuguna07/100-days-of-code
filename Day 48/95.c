// Check if one string is a rotation of another.

#include <stdio.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int len1 = 0, len2 = 0, i, j, found = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    /* Find lengths manually */
    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    /* Lengths must be equal */
    if(len1 != len2)
    {
        printf("Not a rotation");
        return 0;
    }

    /* Create str1 + str1 */
    for(i = 0; i < len1; i++)
        temp[i] = str1[i];

    for(i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];

    temp[2 * len1] = '\0';

    /* Check if str2 exists in temp */
    for(i = 0; i <= 2 * len1 - len2; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(temp[i + j] != str2[j])
                break;
        }

        if(j == len2)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Rotation");
    else
        printf("Not a rotation