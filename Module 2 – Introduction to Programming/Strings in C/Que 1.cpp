#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100]; // Declare two strings with sufficient size

    // Accept two strings from the user
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Print concatenated string and its length
    printf("Concatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));

    return 0;
}
