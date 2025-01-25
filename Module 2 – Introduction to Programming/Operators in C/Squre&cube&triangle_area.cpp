#include <stdio.h>

 main() {
    float side, area_square, area_cube, base, height, area_triangle;

    //area of a square
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    area_square = side * side;  
    printf("Area of the square: %.2f\n", area_square);

    // area of a cube
    printf("Enter the side of the cube: ");
    scanf("%f", &side);
    area_cube = 6 * side * side;  
    printf(" area of the cube: %f\n", area_cube);

    //  area of a triangle
    printf("Enter the base and height of the triangle:\n");
    printf("Base: ");
    scanf("%f", &base);
    printf("Height: ");
    scanf("%f", &height);
    area_triangle = 0.5 * base * height;  
    printf("Area of the triangle: %f\n", area_triangle);

}

