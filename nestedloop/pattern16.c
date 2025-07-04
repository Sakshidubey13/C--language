#include <stdio.h>
#include <conio.h>

void main()
{
    // 1 0 1 0 1
    // 0 1 0 1
    // 1 0 1
    // 0 1
    // 1

    int i, j; // declare variables 

    for (i = 1; i <= 5; i++) // outer loop for rows
    {
        for (j = i; j <= 5; j++) // inner loop for columns
        {
            if (j % 2 == 0) // check if j is even
            {
                printf("0 "); // print 0
            }
            else
            {
                printf("1 "); // print 1
            }
        }
        printf("\n"); // to get new line
    }
}