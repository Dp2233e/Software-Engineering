#include <stdio.h>

int main() {
    // One-dimensional array
    int arr[5] = {1, 2, 3, 4, 5};
    printf("One-dimensional array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Two-dimensional array (3x3 matrix)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int sum = 0;
    printf("Two-dimensional array (3x3 matrix):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }
    
    printf("\nSum of all elements in the matrix: %d\n", sum);
    return 0;
}
