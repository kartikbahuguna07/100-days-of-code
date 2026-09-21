// Reverse a string.

#include <stdio.h>
int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    while (str[len] != '\0') {
        len++;
    }

    // Print in reverse
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}