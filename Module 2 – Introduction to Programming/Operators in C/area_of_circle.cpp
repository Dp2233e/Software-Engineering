#include <stdio.h>

 main() {
    float radius, area, circumference;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area = 3.14 * radius * radius;  
    circumference = 2 * 3.14 * radius;  

    printf("\nArea of the circle: %f\n", area);


}

