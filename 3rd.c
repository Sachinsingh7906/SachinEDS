#include <stdio.h>

int main() {
    int size, i, j;
    int matrix[10][10];
    int main_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    printf("Enter the size of the square matrix (e.g., 3 for 3x3): ");
    scanf("%d", &size);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Single loop to calculate diagonal sums efficiently in O(N) time
    for (i = 0; i < size; i++) {
        main_diagonal_sum += matrix[i][i];
        secondary_diagonal_sum += matrix[i][size - i - 1];
    }

    printf("\nSum of Main Diagonal elements: %d\n", main_diagonal_sum);
    printf("Sum of Secondary Diagonal elements: %d\n", secondary_diagonal_sum);

    return 0;
}
