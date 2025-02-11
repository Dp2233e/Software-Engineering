#include <stdio.h>

int main() {
    int arr[5], i, max;

    // Accept numbers from user
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum element
    max = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print maximum element
    printf("Maximum element: %d\n", max);

    return 0;
}
