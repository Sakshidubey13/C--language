#include<stdio.h>
#include<conio.h>

int main()
 {
    float side, area;

    printf("Enter the side of the square: "); //input massge for first side square
    scanf("%f", &side); // User input of the first variable


    // Calculate area
    area = side * side;

    // Output the result
    printf("Area of the square = %.2f\n", area); // print output

    return 0;
}