#include <stdio.h>
#include <conio.h>

void main()
{
    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    // row = 5
    // coloum = 5

    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 6 - i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}