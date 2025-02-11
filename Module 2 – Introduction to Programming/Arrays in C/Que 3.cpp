#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    // Accept numbers from user
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Ascending order sorting
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print ascending order
    printf("\nAscending Order: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Descending order sorting
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print descending order
    printf("\nDescending Order: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

