#include <stdio.h>
#include <conio.h>
void main()
{
    // 0
    // 0 1
    // 0 1 0
    // 0 1 0 1
    // 0 1 0 1 0

    int i, j; // declare variable 

    for (i = 1; i <= 5; i++) // outer loop for rows
    {
        for (j = 1; j <= i; j++) // inner loop for columns
        {
            if (j % 2 == 0) // check if jj is even
            {
                printf("1 "); // print 1
            }
            else
            {
                printf("0 "); // print 0
            }
        }
        printf("\n"); // to get new line
    }
}