#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5; // Size of the pattern
    int matrix[2*n - 1][2*n - 1];
    int i, j;

    // Fill the matrix
    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            int min_distance = i < j ? i : j;
            min_distance = min_distance < 2 * n - i - 1 ? min_distance : 2 * n - i - 2;
            min_distance = min_distance < 2 * n - j - 1 ? min_distance : 2 * n - j - 2;
            matrix[i][j] = n - min_distance;
        }
    }

    // Print the matrix
    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
