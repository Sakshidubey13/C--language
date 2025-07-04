#include <stdio.h>
#include <conio.h>

void main()
{

    // 1
    //  2 2
    //  3 3 3
    //  4 4 4 4
    //  5 5 5 5 5

    // row - 5
    // coloum = 5

    int i, j; // declare variables

    for (i = 1; i <= 5; i++) // output rows
    {
        for (j = 1; j <= i; j++) // inner column
        {
            printf("%d ", i); // print the value of i
        }
        printf("\n"); // print new line
    }
}