#include <stdio.h>
#include <conio.h>

void main()
{

    //  1 1 1 1 1
    // 2 2 2 2
    // 3 3 3
    // 4 4
    // 5

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i + 1; j++)
        {
            printf("%d ", i);
        }
        printf("\n ");
    }
}