#include <stdio.h>

int main() {
    printf("Using break statement:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; 
        }
        printf("%d\n", i);
    }

    printf("\nUsing continue statement:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue; 
        }
        if (i == 5) {
            break; 
        }
        printf("%d\n", i);
    }

    return 0;
}
