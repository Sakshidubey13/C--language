#include <stdio.h>
#include <conio.h>

void main()
{
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    //row -5
    //coloum - 5

    int i,j;

    for (i = 1; i <= 5; i++)
    {
        for(j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}