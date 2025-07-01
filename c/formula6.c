// 6.WAP to find a the answer given formula (x-y-z)3.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int x, y, z; // Declared three integer variables
    float ans;   // Declared float variable

    printf("Enter X : "); // Input message for X
    scanf("%d", &x);      // User input to x
    printf("Enter Y :");  // Input message for Y
    scanf("%d", &y);      // User input to y
    printf("Enter Z :");  // Input message for Z
    scanf("%d", &z);      // User input to z

    ans = (x * x * x) - (y * y * y) - (z * z * z) - (3 * x * x * y) - (3 * x * x * z) - (3 * x * y * y) - (3 * y * y * z) - (3 * x * z * z) - (3 * y * z * z) - (6 * x * y * z); // Calculate Ans
    printf("Ans is = %f", ans);                                                                                                                                                  // to print Ans
}