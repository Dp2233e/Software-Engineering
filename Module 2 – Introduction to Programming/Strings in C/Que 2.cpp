#include <stdio.h>

int main() {
    char str[100];  // Declare a string with sufficient size
    int i, length = 0;

    // Accept string from user
    printf("Enter a string: ");
    gets(str);

    // Calculate length manually
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}

