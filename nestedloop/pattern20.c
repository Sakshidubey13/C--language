#include <stdio.h>
#include <conio.h>
void main()
{
    //  -
    // | -
    // - | -
    // | - | -
    // - | - | -

    //row = 5, column = 5

    int i, j; // declare variables 

    for (i = 1; i <= 5; i++) // outer loop for rows
    {
        for (j = i; j >= 1; j--) // inner loop for columns
        {
            if (j % 2 == 0) // check if j is even
            {
                printf("| "); // print vertical bar
            }
            else
            {
                printf("- "); // print horizontal bar
            }
        }
        printf("\n"); // to get new line
    }
}