#include <stdio.h>
#include <conio.h>

void main()
{
    //*      *
    // *    *
    //  *  *
    //   *
    //   *
    //   *
    //   *

    int i, j;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 && (j == 1 || j == 7))
            {
                printf("* ");
            }
            else if (i == 2 && (j == 2 || j == 6))
            {
                printf("* ");
            }
            else if (i == 3 && (j == 3 || j == 5))
            {
                printf("* ");
            }
            else if ((j == 4) && (i != 1 && i != 2 && i != 3))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}