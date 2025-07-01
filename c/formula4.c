// 4.WAP to find a the answer given formula (x-y)3.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int x, y;  // Declared two integer variables
    float ans; // Declared float variable

    printf("Enter X :"); // Input message for X
    scanf("%d", &x);     // User input to x
    printf("Enter Y :"); // Input message for Y
    scanf("%d", &y);     // User input to y

    ans = (x * x * x) - (3 * x * x * y) - (3 * x * y * y) - (y * y * y); // Calculate Ans
    printf("Ans is= %f", ans);                                           // to print Ans
}