//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, sum, maxSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    maxSum = arr[0];

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}