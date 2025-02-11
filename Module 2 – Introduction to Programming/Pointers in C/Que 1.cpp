#include <stdio.h>

int main() {
    int num = 10;  // Declare an integer variable
    int *ptr;      // Declare a pointer

    ptr = &num;    // Store the address of num in ptr

    printf("Original value: %d\n", num);

    *ptr = 20;     // Modify the value using the pointer

    printf("Modified value: %d\n", num);

    return 0;
}

