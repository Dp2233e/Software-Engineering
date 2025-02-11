#include <stdio.h>

// Function to concatenate two strings
void concatenate(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Move to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Copy str2 into str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; // End string with null character
}

int main() {
    char str1[100], str2[100];

    // Take input from user
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Call function to concatenate strings
    concatenate(str1, str2);

    // Print the result
    printf("Concatenated String: %s\n", str1);

    return 0;
}

