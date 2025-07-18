#include <stdio.h>
#include <conio.h>

void main()
{
    // 3 . develop a program that prints the given . Left half triangle pattern using a nested for loop.

    //         5
    //       4 5
    //     3 4 5
    //   2 3 4 5
    // 1 2 3 4 5

    int i, j, k; // declare variable

    for (i = 5; i >= 1; i--) // output row
    {
        for (k = 1; k <= i; k++)
        {
            printf("  "); // print space
        }
        for (j = i; j <= 5; j++) // inner coloum
        {
            printf("%d ", j); // print out value j means (coloum)
        }
        printf("\n");
    }
}