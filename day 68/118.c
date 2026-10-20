// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main()
{
    int n, i, sum = 0, missing;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    missing = n * (n + 1) / 2 - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}