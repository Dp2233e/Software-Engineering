#include <stdio.h>

 main() {
    int num1, num2;
    
    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    
    printf("\nArithmetic Operations:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2); 

  
    printf("\nRelational Operations:\n");
    printf("%d > %d = %d\n", num1, num2, num1 > num2);
    printf("%d < %d = %d\n", num1, num2, num1 < num2);
    printf("%d == %d = %d\n", num1, num2, num1 == num2);
    printf("%d != %d = %d\n", num1, num2, num1 != num2);

    
    printf("\nLogical Operations (for num1 and num2 > 0):\n");
    printf("(num1 > 0) && (num2 > 0) = %d\n", (num1 > 0) && (num2 > 0));
    printf("(num1 > 0) || (num2 > 0) = %d\n", (num1 > 0) || (num2 > 0));
    printf("!(num1 > 0) = %d\n", !(num1 > 0));

    
}

