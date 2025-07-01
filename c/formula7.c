// 7.WAP to find a the answer given formula (x+y+z)2.
// x² + y² + z² + 2xy + 2yz + 2xz.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int x, y, z; // Declared three integer variables
    float ans;   // Declared float variable

    printf("Enter X : "); // Input message for X
    scanf("%d", &x);      // User input to x
    printf("Enter Y : "); // Input message for Y
    scanf("%d", &y);      // User input to y
    printf("Enter Z : "); // Input message for Z
    scanf("%d", &z);      // User input to z

    ans = (x * x) + (y * y) + (z * z) + (2 * x * y) + (2 * y * z) + (2 * x * z); // Calculate Ans
    printf("Ans is = %f", ans);                                                  // to print Ans
}