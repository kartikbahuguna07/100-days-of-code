// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
// Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);

    int totalSum = 0;

    for(x = 1; x <= n; x++)
    {
        totalSum = totalSum + x;
    }

    int leftSum = 0;
    int pivot = -1;

    for(x = 1; x <= n; x++)
    {
        leftSum = leftSum + x;

        int rightSum = totalSum - x + 1;

        if(leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}