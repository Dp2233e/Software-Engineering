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

// Function definition
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
