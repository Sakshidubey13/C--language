#include <stdio.h>

void main()
{
    // 5.Develop a pogram that prints the given Full Pyramid pattern using a nested for loop

    //          5
    //        4 5 4
    //      3 4 5 4 3
    //    2 3 4 5 4 3 2
    //  1 2 3 4 5 4 3 2 1

    int i, j, k;

    for (i = 5; i >= 1; i--) // outer rows (from 5 to 1)
    {
        for (k = 1; k < i; k++)
        {
            printf("  "); // print space
        }
        for (j = i; j <= 5; j++) // print coloum
        {
            printf("%d ", j);
        }
        for (j = 4; j >= i; j--)
        {
            printf("%d ", j); // print out value j
        }
        printf("\n"); // to get new line
    }
}
