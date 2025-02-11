#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num;
    
    // Get user input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Function call and result display
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}

// Recursive function definition
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
