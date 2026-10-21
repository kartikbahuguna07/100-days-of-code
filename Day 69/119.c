// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 2};
    int n = 5, result = 0;

    for (int i = 0; i < n; i++) {
        result ^= a[i];
    }

    // XOR with all distinct elements
    result ^= 1 ^ 2 ^ 3 ^ 4;

    printf("Repeated element = %d", result);

    return 0;
}