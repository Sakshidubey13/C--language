// 1. WAP to Find area of circle.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int r;           // Declared one r name variable for radius
    float pi = 3.14; // value of pi 3.14 is assign in float pi variable

    printf("Enter Radius :"); // Input message for Radius
    scanf("%d", &r);          // User input to Radius

    printf("Area of Circle is %f", pi * r * r); // To print area of circle

    // 2. WAP to Find area of sqare.

    int side; // Declared side name variable

    printf("\n\n\nEnter Side :"); // Input message for Side
    scanf("%d", &side);           // User input to Side

    printf("Area of Sqare is %d", side * side); // To print area of Sqare

    // 3. WAP to Find area of rectangle.

    int length, width; // Declared two integer variables

    printf("\n\n\nEnter Length :"); // Input message for Length
    scanf("%d", &length);           // User input to length

    printf("Enter Width :"); // Input message for Width
    scanf("%d", &width);     // User input to Width

    printf("Area of Rectangle is %d", length * width); // To print area of Rectangle

    // 4. WAP to Find area of triangle.

    int base, height; // Declared two integer variables
    float tri;        // Declared float variable

    printf("\n\n\nEnter Base :"); // Input message for Base
    scanf("%d", &base);           // User input to Base

    printf("Enter Height :"); // Input message for Height
    scanf("%d", &height);     // User input to Height

    tri = 0.5 * base * height; // Calculate Triangle

    printf("Area of Triangle is %f", tri); // To print area of Triangle

    // 5. WAP to Simple interest.

    int p, i, t; // Declared three integer variables
    float si;    // Declared float variables

    printf("\n\n\nEnter principal amount :"); // Input message for Principal amount
    scanf("%d", &p);                          // User input to Principal amount

    printf("Enter annual interest rate :"); // Input message for annual interest rate
    scanf("%d", &i);                        // User input to annual interest rate

    printf("Enter time period in years:"); // Input message for time period in years
    scanf("%d", &t);                       // User input to time period in years

    si = p * i * t / 100; // Calculate Simple interest

    printf("Simple interest is %f", si); // To print Simple interest

    // 6. WAP to Perimeter of circle.

    int radius; // Declared integer variable
    // floatv pi=3.14; //above already declared

    printf("\n\n\nEnter Radius :"); // Input message for Radius
    scanf("%d", &r);                // User input to Radius

    printf("Perimeter of circle is %f", pi * pi * r); // To print Perimeter of circle
}
