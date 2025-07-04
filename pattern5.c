#include <stdio.h>
#include <conio.h>

void main()
{
    // 5
    //  4 5
    // 3 4 5
    // 2 3 4 5
    // 1 2 3 4 5

    int i, j;// declare variables
    for (i = 5; i >= 1; i--) // outer rows
    {
        for (j = i; j <= 5; j++) // inner columns
        {
            printf("%d ", j); // print the value of j
        }
        printf("\n");// new line
    }
}