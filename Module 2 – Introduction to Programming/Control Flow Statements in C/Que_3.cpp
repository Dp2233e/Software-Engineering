#include <stdio.h>

 main() {
    float costPrice, sellingPrice;

    
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        printf("Profit: %f\n", sellingPrice - costPrice);
    } else if (costPrice > sellingPrice) {
        printf("Loss: %f\n", costPrice - sellingPrice);
    } else {
        printf("No profit, no loss.\n");
    }

   
}

