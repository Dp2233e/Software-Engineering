#include <stdio.h>

int main() {
    char str[100];  
    int i, len = 0, flag = 1;

    // Take input from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[len] != '\0') {
        len++;
    }

    // Check palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    // Print result
    if (flag == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

