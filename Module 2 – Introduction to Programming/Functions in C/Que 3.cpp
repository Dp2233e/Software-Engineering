#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, flag = 1;
    
    // Get user input
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    
    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    
    // Check if palindrome
    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    
    return 0;
}
