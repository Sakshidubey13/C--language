// wap to swap value of two variable (using third variable).

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int x, y; // Declared two integer variables
    int z;    // integer variale z is third variable

    printf("Enter a number X: "); // Input message for X
    scanf("%d", &x);              // User input to x

    printf("Enter a number  Y: "); // Input message for Y
    scanf("%d", &y);               // User input to y

    z = x; // value of variable x is assign in variable z
    x = y; // value of variable y is assign in variable x
    y = z; // value of variable z is assign in variable y

    printf("\nX= %d\n", x); // to print value of variable x ex.x=10
    printf("Y= %d", y);     // to print value of variable y ex.y=20
}