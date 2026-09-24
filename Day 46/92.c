// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(freq[str[i] - 'a'] == 1) {
            printf("First repeating character: %c", str[i]);
            return 0;
        }
        freq[str[i] - 'a']++;
    }

    printf("No repeating character found");
    return 0;
}

