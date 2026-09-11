// Search in a sorted array using binary search.

#include <stdio.h>
int main() {
    int arr[100], n, key;
    int low, high, mid;

    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Found %d at position %d\n", key, mid + 1);
            return 0;   // exit immediately once found
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("%d not found\n", key);
    return 0;
}
