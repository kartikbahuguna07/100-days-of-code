// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    // Normalize k in case it's larger than n
    k = k % n;

    // Temporary array to store rotated result
    int rotated[100];

    // Copy last k elements to the front
    for(int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Copy the remaining elements
    for(int i = 0; i < n - k; i++) {
        rotated[k + i] = arr[i];
    }

    printf("Array after rotation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
