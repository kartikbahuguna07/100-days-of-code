// Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n, i;
    int factorial = 1;   // using int only
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
