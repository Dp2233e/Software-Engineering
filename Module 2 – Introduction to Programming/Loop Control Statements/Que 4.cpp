#include <stdio.h>

int main() {
    int arr[5];
    
    
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Numbers in reverse order: \n");
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
