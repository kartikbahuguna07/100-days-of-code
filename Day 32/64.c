// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0}; // to store frequency of digits 0-9
    int digit, maxDigit, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if(num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", maxDigit, maxCount);

    return 0;
}
