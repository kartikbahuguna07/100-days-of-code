// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    int ascii = (int)ch;
    if (ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 ||
            ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117) {
            printf("'%c' (ASCII: %d) is a vowel.\n", ch, ascii);
    }
    else {
            printf("'%c' (ASCII: %d) is a consonant.\n", ch, ascii);
    }
    return 0;
}
