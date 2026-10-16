// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, k, len, max = 0, repeat;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        repeat = 0;

        for (j = i; j < len; j++) {
            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }

            if (repeat)
                break;

            if (j - i + 1 > max)
                max = j - i + 1;
        }
    }

    printf("%d\n", max);

    return 0;
}