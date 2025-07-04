#include <stdio.h>
#include <conio.h>
void main()
{
    // 5 4 3 2 1
    // 5 4 3 2
    // 5 4 3
    // 5 4
    // 5

    int i, j; // declare variables

    for (i = 1; i <= 5; i++) // outer loop for rows
    {
        for (j = 5; j >= i; j--) // inner loop for columns
        {
            printf("%d ", j); // print the value of j
        }
        printf("\n"); // print new LINE
    }
}