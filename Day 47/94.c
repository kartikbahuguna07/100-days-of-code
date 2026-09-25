//  Find the longest word in a sentence.

#include <stdio.h>

int main()
{
    char str[100], longest[100], word[100];
    int i = 0, j = 0;
    int maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            word[len] = '\0';

            if (len > maxLen)
            {
                maxLen = len;

                for (j = 0; j <= len; j++)
                {
                    longest[j] = word[j];
                }
            }

            len = 0;

            if (str[i] == '\0')
                break;
        }
        else
        {
            word[len] = str[i];
            len++;
        }

        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}