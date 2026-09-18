// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int r, c;
    
    // Read rows and columns
    scanf("%d %d", &r, &c);
    
    int mat[100][100];
    
    // Read matrix elements
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Diagonal traversal
    for (int s = 0; s <= r + c - 2; s++) {
        if (s % 2 == 0) {
            
            for (int i = r - 1; i >= 0; i--) {
                int j = s - i;
                if (j >= 0 && j < c) {
                    printf("%d ", mat[i][j]);
                }
            }
        } else {
            
            for (int i = 0; i < r; i++) {
                int j = s - i;
                if (j >= 0 && j < c) {
                    printf("%d ", mat[i][j]);
                }
            }
        }
    }
    printf("\n");
    
    return 0;
}