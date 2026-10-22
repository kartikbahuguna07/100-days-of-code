// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0)
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s", str);

    return 0;
}