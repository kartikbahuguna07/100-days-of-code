// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() {
    int n, i, j;
    
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int distinct = 1;

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct)
            break;
    }

    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}